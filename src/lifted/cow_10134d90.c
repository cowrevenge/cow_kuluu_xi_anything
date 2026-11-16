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
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_10134d9d;
    return in_eax & 0xffffff00u;
L_10134d9d: ;
    if (rd32(COW_IMG(0x105781bcu)) != 0u) goto L_10134daa;
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
    cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, rd32(COW_IMG(0x105781c8u)));
    t6 = g->edx;
    d7 = cow_take_float(g);
    d8 = cow_take_float(g);
    d9 = cow_take_float(g);
    d10 = cow_take_float(g);
    d11 = cow_take_float(g);
    d12 = cow_take_float(g);
    d13 = cow_take_float(g);
    d14 = cow_take_float(g);
    g->edx = t6;
    t15 = rd32(COW_IMG(0x105781bcu));
    t16 = cow_thiscall(g, COW_IMG(0x10135de0u), t15, 1, arg1);
    t17 = g->ecx;
    t18 = g->edx;
    t19 = cow_cdecl(g, COW_IMG(0x100e5e40u), 1, COW_IMG(0x10134d70u));
    fpush(g, d7);
    fpush(g, d8);
    fpush(g, d9);
    fpush(g, d10);
    fpush(g, d11);
    fpush(g, d12);
    fpush(g, d13);
    fpush(g, d14);
    return (t19 & 0xffffff00u) | 1u;
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
