/* f_0x10233280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10233280(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 > 4u)
    {
        ecx = self;
        edx = in_edx;
        goto L_1023332a;
    }
    t1 = rd32(COW_IMG(0x1023336cu) + arg3 * 4u);
    switch (t1 - RD)
    {
    case 0x102332a6u: goto L_102332a6;
    case 0x102332bcu: goto L_102332bc;
    case 0x102332cdu: goto L_102332cd;
    case 0x102332deu: goto L_102332de;
    case 0x1023330au: goto L_1023330a;
    default: rt_fatal(g, COW_IMG(0x1023329fu), "switch");
    }
    return;
L_102332a6: ;
    g->eax = arg3;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 0u, 0x23u);
    t15 = g->edx;
    t16 = arg1 + arg2 * 6u + 4u;
    eax = t16;
    edx = t15;
    loc_10 = t14;
    loc_14 = 5u;
    loc_18 = t16;
L_10233323: ;
    g->ebx = arg1;
    g->edi = arg2 * 6u;
    g->edx = edx;
    t17 = rd32(self);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101170f0u), t17, 3, loc_18, loc_14, loc_10);
    t18 = g->ecx;
    t19 = g->edx;
    ecx = t18;
    edx = t19;
L_1023332a: ;
    if (arg4 != 0u)
    {
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x1025c190u), 2, self + 8u, arg4);
        t20 = rd32(self + 4u);
        t21 = 0x13fu - (arg1 + arg2 * 6u + 0x12u);
        g->eax = t21;
        g->edx = t20;
        t22 = cow_thiscall_cdecl(g, COW_IMG(0x1018d470u), self + 8u, 3, t21, 0u, t20);
        t23 = g->edx;
        t24 = arg1 + arg2 * 6u + 0x12u;
        g->ebx = arg1;
        g->edi = t24;
        cow_thiscall(g, COW_IMG(0x10117240u), rd32(self), 6, t24, 0u, t22, t21, 0u, t20);
    }
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
L_102332bc: ;
    g->eax = arg3;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 4u, 0xaau);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_1023331c: ;
    t13 = arg1 + arg2 * 6u;
    loc_10 = eax;
    loc_14 = 1u;
    loc_18 = t13;
    goto L_10233323;
L_102332cd: ;
    g->eax = arg3;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    eax = rd32(rd32(t10) + 0x6c4u);
    edx = rd32(t10);
L_10233319: ;
    goto L_1023331c;
L_102332de: ;
    g->eax = arg3;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t4 = rd32(rd32(t3) + 0x194u);
    t5 = arg1 + arg2 * 6u;
    g->ebx = arg1;
    g->edi = arg2 * 6u;
    g->edx = rd32(t3);
    t6 = rd32(self);
    t7 = rd32(t3);
    cow_thiscall(g, COW_IMG(0x10117150u), t6, 5, t5, 1u, 0x3f4ccccdu, 0x3f4ccccdu, t4);
    t8 = g->ecx;
    t9 = g->edx;
    ecx = t8;
    edx = t9;
    goto L_1023332a;
L_1023330a: ;
    g->eax = arg3;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    eax = rd32(rd32(t2) + 0x5fcu);
    edx = rd32(t2);
    goto L_10233319;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10233280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10233280(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
