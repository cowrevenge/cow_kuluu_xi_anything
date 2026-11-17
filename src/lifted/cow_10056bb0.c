/* f_0x10056bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10056bb0(Guest* g)
{
    double d10;
    double d4;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x10071e90u), in_eax, self, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (arg3 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        ebx = 0u;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        x0 = (double)rdf32(COW_IMG(0x103295d8u));
        if (rd8(arg3 + 0x142u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg3 + 0x142u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(arg3 + 0x142u);
            d4 = (double)rdf32(arg3 + 0x9cu);
            if (d4 == (double)rdf32(COW_IMG(0x1032961cu)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
            }
            else
            {
                t5 = rd32(self + 0x7cu);
                eax = t5;
                x0 = fr(g, fr(g, (double)(int64_t)cow_i64(t5, 0u) * (double)rdf32(arg3 + 0x9cu)) * (double)rdf32(COW_IMG(0x103295d8u)));
            }
        }
        ebx = rd32(arg3 + 0x90u);
    }
    fpush(g, x0);
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    g->edx = arg1;
    t7 = cow_thiscall(g, COW_IMG(0x10056ce0u), self, 4, arg1, arg2, ebx, t6);
    t8 = g->edx;
    if (arg3 == 0u)
    {
        eax = t7;
        edx = t8;
        edi = t7;
    }
    else
    {
        eax = t7;
        edx = t8;
        edi = t7;
        t9 = rd8(arg3 + 0x144u);
        wr8(edi + 0x144u, (uint8_t)t9);
        if (rd8(arg3 + 0x142u) == 0u)
        {
            eax = ((eax | t9) & 0xffffff00u) | rd8(arg3 + 0x142u);
        }
        else
        {
            eax = ((eax | t9) & 0xffffff00u) | rd8(arg3 + 0x142u);
            d10 = (double)rdf32(arg3 + 0x9cu);
            wrf32(edi + 0x9cu, (float)d10);
            wr8(edi + 0x142u, 1u);
        }
    }
    if (edi != 0u)
    {
        g->esp = sp0 - 0x14u;
        cow_fastcall(g, COW_IMG(0x100748c0u), edi, edx, 0);
    }
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10056bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10056bb0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
