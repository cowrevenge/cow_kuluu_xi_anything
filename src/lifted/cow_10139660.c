/* f_0x10139660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10139660(Guest* g)
{
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), self, 1, 0u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        if ((int16_t)rd16(self + 0x2cu) >= 1000)
        {
            ecx = rd32(eax + 0x28u);
            goto L_10139693;
        }
        ecx = rd32(eax + 0x28u);
        if ((int32_t)ecx < 1000) goto L_101396dd;
        wr32(self + 0x24u, 0x3f800000u);
L_101396d9: ;
        wr8(self + 0x2eu, 1u);
L_101396dd: ;
        wr16(self + 0x2cu, (uint16_t)ecx);
        if ((int32_t)ecx < 3000)
        {
            if ((int32_t)ecx < 2000)
            {
                if ((int32_t)ecx < 1000)
                {
                    edi = 0u;
                }
                else
                {
                    edi = 0x800060b0u;
                }
            }
            else
            {
                edi = 0x8000b060u;
            }
        }
        else
        {
            edi = 0x802060d0u;
        }
        g->edx = edx;
        d5 = fr(g, (double)rdf32(self + 0x24u) * (double)rdf32(COW_IMG(0x1032a34cu)));
        fpush(g, d5);
        g->esp = sp0 - 8u;
        t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t7 = g->edx;
        if ((int16_t)t6 <= 255)
        {
            eax = t6;
            edx = t7;
        }
        else
        {
            edx = t7;
            eax = 0xffu;
        }
        t8 = (uint32_t)(int16_t)(eax - 0x7fu) << 0x18u;
        t9 = ((t8 ^ edi) & 0xffffffu) ^ t8;
        wr32(self + 0x28u, t9);
        eax = t8;
    }
    g->edx = edx;
    return eax;
L_10139693: ;
    if ((int32_t)ecx < 1000) goto L_101396dd;
    if (rd8(self + 0x2eu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x2eu);
        x0 = (double)rdf32(self + 0x24u);
        goto L_101396c3;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x2eu);
    x0 = (double)rdf32(self + 0x24u);
    d3 = fr(g, x0 * (double)rdf32(COW_IMG(0x1033138cu)));
    wrf32(self + 0x24u, (float)d3);
    if ((cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d3, (double)rdf32(COW_IMG(0x10329990u)), 0u) & 0x4100u;
        wr8(self + 0x2eu, 0u);
    }
    goto L_101396dd;
L_101396c3: ;
    d4 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329d34u)));
    wrf32(self + 0x24u, (float)d4);
    if (!(d4 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        goto L_101396dd;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    goto L_101396d9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10139660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10139660(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
