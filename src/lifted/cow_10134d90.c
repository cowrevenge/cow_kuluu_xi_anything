/* f_0x10134d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10134d90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_10134d9d;
    return in_eax & 0xffffff00u;
L_10134d9d: ;
    if (rd32(COW_IMG(0x105781bcu)) != 0u)
    {
        eax = rd32(COW_IMG(0x105781bcu));
        goto L_10134daa;
    }
    eax = rd32(COW_IMG(0x105781bcu));
    return eax & 0xffffff00u;
L_10134daa: ;
    if (rd32(COW_IMG(0x105781c8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781c8u));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x105781c8u));
        g->eax = eax;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, in_edx, 1, 1, 0x10u);
        t2 = g->edx;
        if (t1 == 0u)
        {
            edx = t2;
            ecx = 0u;
        }
        else
        {
            eax = t1;
            edx = t2;
            wr32(eax, COW_IMG(0x10333830u));
            ecx = eax;
        }
        wr32(COW_IMG(0x105781c8u), ecx);
    }
    g->eax = rd32(ecx);
    g->edx = edx;
    t3 = rd32(ecx);
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, rd32(t3 + 0x58u), ecx, 1, 0u);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, rd32(COW_IMG(0x105781c8u)));
    t7 = g->edx;
    g->edx = t7;
    t8 = rd32(COW_IMG(0x105781bcu));
    t9 = cow_thiscall(g, COW_IMG(0x10135de0u), t8, 1, arg1);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = cow_cdecl(g, COW_IMG(0x100e5e40u), 1, COW_IMG(0x10134d70u));
    return (t12 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10134d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10134d90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
