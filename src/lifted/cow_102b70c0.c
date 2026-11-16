/* f_0x102b70c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b70c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t30;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->eax = arg3;
    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_ebp);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c23f4u), arg1);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)arg2 < 1) goto L_102b723f;
    ecx = t4;
    edx = t5;
    eax = arg2;
    esi = 0u;
L_102b70f1: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_esi, in_edi);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = rd32(arg1 + esi * 4u);
    g->eax = t8;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x14u;
    t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c23e4u), esi);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)(esi + 1u) < 4)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        esi = esi + 1u;
        goto L_102b70f1;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    ebx = arg1 + 0x10u;
    esi = 0u;
L_102b7116: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_ebx, in_esi);
    t13 = g->edx;
    g->ecx = rd32(ebx);
    g->edx = t13;
    t14 = rd32(ebx);
    g->esp = sp0 - 0x18u;
    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c23d4u), esi);
    t16 = g->ecx;
    t17 = g->edx;
    if ((int32_t)(esi + 1u) < 4)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        ebx = ebx + 4u;
        esi = esi + 1u;
        goto L_102b7116;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    esi = 0u;
L_102b7139: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t18 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_esi, in_edi);
    t19 = g->ecx;
    t20 = (uint32_t)(int8_t)rd8(arg1 + esi + 0x20u);
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0x14u;
    t21 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c23c0u), esi);
    t22 = g->ecx;
    t23 = g->edx;
    if ((int32_t)(esi + 1u) < 4)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        esi = esi + 1u;
        goto L_102b7139;
    }
    eax = t21;
    ecx = t22;
    edx = t23;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t24 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_esi, in_edi);
    t25 = g->ecx;
    t26 = g->edx;
    if (rd32(arg1 + 0x24u) > 7u)
    {
        eax = t24;
        ecx = t25;
        edx = t26;
        goto L_102b721e;
    }
    eax = t24;
    ecx = t25;
    edx = t26;
    ebp = rd32(arg1 + 0x24u);
    t27 = rd32(COW_IMG(0x102b7244u) + ebp * 4u);
    switch (t27 - RD)
    {
    case 0x102b7176u: goto L_102b7176;
    case 0x102b718bu: goto L_102b718b;
    case 0x102b71a0u: goto L_102b71a0;
    case 0x102b71b5u: goto L_102b71b5;
    case 0x102b71cau: goto L_102b71ca;
    case 0x102b71dfu: goto L_102b71df;
    case 0x102b71f4u: goto L_102b71f4;
    case 0x102b7209u: goto L_102b7209;
    default: rt_fatal(g, COW_IMG(0x102b716fu), "switch");
    }
    return;
L_102b7176: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2398u), COW_IMG(0x103c23a4u));
    return;
L_102b718b: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2398u), COW_IMG(0x103c2384u));
    return;
L_102b71a0: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2398u), COW_IMG(0x103c2370u));
    return;
L_102b71b5: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2398u), COW_IMG(0x103c235cu));
    return;
L_102b71ca: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2398u), COW_IMG(0x103c2348u));
    return;
L_102b71df: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2398u), COW_IMG(0x103c2334u));
    return;
L_102b71f4: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2398u), COW_IMG(0x103c2320u));
    return;
L_102b7209: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2398u), COW_IMG(0x103c230cu));
    return;
L_102b721e: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t28 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c2194u));
    t29 = g->ecx;
    t30 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c22f4u), COW_IMG(0x103b379cu));
L_102b723f: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b70c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b70c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
