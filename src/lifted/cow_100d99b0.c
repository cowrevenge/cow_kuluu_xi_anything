/* f_0x100d99b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100d99b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
    const uint32_t in_ebx = g->ebx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100d9990u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        ecx = t2;
        edx = t3;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        goto L_100d99ef;
    }
    eax = rd32(self + 4u);
    ecx = t2;
    edx = t3;
    ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_100d9a2d;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_stdcall(g, COW_IMG(0x10016410u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        edx = t6;
        goto L_100d9a2d;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 0x400u);
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x100fc180u), 1, 1u);
    t11 = g->edx;
    wr32(self + 4u, 0u);
    g->edx = t11;
    return (t10 & 0xffffff00u) | (uint8_t)ebx;
L_100d99ef: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t13 = g->ecx;
    t14 = g->edx;
    if ((t12 >> 8u & 2u) == 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_100d9a03;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t16 = g->ecx;
    t17 = g->edx;
    if ((t15 >> 8u & 4u) == 0u)
    {
        eax = t15;
        ecx = t16;
        goto L_100d9a17;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
L_100d9a03: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t18 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t19 = g->ecx;
    t20 = g->edx;
    if ((t18 >> 8u & 0x20u) == 0u)
    {
        eax = t18;
        edx = t20;
        goto L_100d9a2d;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t21 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    if ((t21 >> 8u & 0x40u) != 0u)
    {
        eax = t21;
        edx = t23;
        goto L_100d9a2d;
    }
    eax = t21;
    ecx = t22;
L_100d9a17: ;
    t24 = rd32(self + 4u) + 1u;
    wr32(self + 4u, t24);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t24;
    g->esp = sp0 - 8u;
    t25 = cow_cdecl(g, COW_IMG(0x10016400u), 1, 1u);
    t26 = g->ecx;
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_stdcall(g, COW_IMG(0x10014ce0u), 0);
    t29 = g->edx;
    eax = t28;
    edx = t29;
L_100d9a2d: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d99b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d99b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
