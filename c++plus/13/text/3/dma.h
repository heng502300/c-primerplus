#ifndef DMA_H_
#define DMA_H_

class DMA
{
    private:
        char * classname;

    protected:
        const char *show_classname() const  {return classname;}
    public:
        DMA(const char * cn = "null");
        DMA(const DMA &rs);
        DMA &operator=(const DMA &RS);
        virtual ~DMA();
        virtual void View() const = 0;
};

class baseDMA : public DMA
{
private:
    char * label;
    int rating;
public:
    baseDMA(const char *l = "null" , int r = 0, const char *cn = "null");
    ~baseDMA();
    baseDMA(const char *l ,int r,const DMA &rs);
    baseDMA(const baseDMA &rs);
    baseDMA &operator=(const baseDMA &rs);
    virtual void View() const;
};

class lacksDMA : public DMA
{
private:
    enum {COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char *c = "blank", const char *Cn = "null");
    lacksDMA(const char *C, const DMA &rs);
    lacksDMA(const lacksDMA &rs);
    ~lacksDMA();
    lacksDMA &operator=(const lacksDMA &rs);
    virtual void View() const; 

};

class hasDMA : public DMA
{
private:
    char *style;
public:
    hasDMA(const char *s = "null", const char *cn = "null");
    hasDMA(const char *s, const DMA &rs);
    hasDMA(const hasDMA &rs);
    ~hasDMA();
    hasDMA &operator=(const hasDMA &rs);
    virtual void View() const;
};



#endif