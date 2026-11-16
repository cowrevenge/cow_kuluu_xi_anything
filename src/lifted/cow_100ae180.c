/* f_0x100ae180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100ae180(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x100ae360u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    g->eax = arg1;
    g->ecx = t1;
    t3 = cow_call_regs(g, COW_IMG(0x100ae1e0u), g->eax, g->ecx, t2, 1, 1, arg1);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    esi = rd32(COW_IMG(0x103290f8u));
L_100ae199: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_stdcall(g, COW_IMG(0x100ae350u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0xffffffffu)
    {
        eax = t6;
        edx = t8;
        goto L_100ae1bd;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_stdcall(g, COW_IMG(0x100ae350u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 1u)
    {
        eax = t9;
        goto L_100ae1c1;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_stdcall(g, COW_IMG(0x100ae350u), 0);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 2u)
    {
        eax = t12;
        edx = t14;
        goto L_100ae1d7;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_thiscall(g, esi, ecx, 1, 1u);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    goto L_100ae199;
L_100ae1bd: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_100ae1c1: ;
    t18 = rd32(COW_IMG(0x10489908u));
    g->esp = sp0;
    t19 = cow_call_regs(g, COW_IMG(0x1008a890u), eax, g->ecx, t18, 1, 3, t18, rd32(COW_IMG(0x104897f0u)), in_esi);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_100ae1d7: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ae180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ae180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
