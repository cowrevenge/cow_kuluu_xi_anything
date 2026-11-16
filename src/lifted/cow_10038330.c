/* f_0x10038330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10038330(Guest* g)
{
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x1046393cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1046393cu));
        edx = in_edx;
        goto L_100383cd;
    }
    eax = rd32(COW_IMG(0x1046393cu));
    if ((int32_t)arg3 >= 0)
    {
        if ((int32_t)arg3 <= 127)
        {
            esi = arg3;
        }
        else
        {
            esi = 0x7fu;
        }
    }
    else
    {
        esi = 0u;
    }
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10456a94u));
    g->esp = sp0 - 8u;
    t2 = cow_call_regs(g, COW_IMG(0x10087060u), eax, g->ecx, g->edx, 1, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        edi = t1;
    }
    else
    {
        eax = t2;
        edx = t3;
        edi = t1;
        if (rd8(COW_IMG(0x10463924u)) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10463924u));
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10463924u));
            edi = 0x14u;
        }
    }
    g->ecx = rd32(COW_IMG(0x1046393cu));
    g->edx = edx;
    t4 = rd32(COW_IMG(0x1046393cu));
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x10246180u), eax, g->ecx, g->edx, 0, 3, 5u, 0xffffffffu, 0xffffffffu);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)t5 >= (int32_t)edi)
    {
        eax = t5;
        edx = t7;
        goto L_100383cd;
    }
    ecx = t6;
    edx = t7;
    if (rd32(arg1 + 8u) == 0x8bfu)
    {
        eax = rd32(arg1 + 8u);
        goto L_1003839c;
    }
    eax = rd32(arg1 + 8u);
    if (eax != 0x80fu) goto L_100383ac;
L_1003839c: ;
    if (rd8(COW_IMG(0x104638f4u)) != 0u) goto L_100383c8;
    wr8(COW_IMG(0x104638f4u), 1u);
L_100383ac: ;
    g->edx = edx;
    d8 = (double)rdf32(arg2);
    fpush(g, d8);
    g->esp = sp0 - 0xcu;
    t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), arg2, g->ecx, g->edx, 1, 0);
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x10246050u), rd32(COW_IMG(0x1046393cu)), 3, arg1, t9, esi);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_100383c8: ;
    g->edx = edx;
    return 0u;
L_100383cd: ;
    g->edx = edx;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10038330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10038330(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
