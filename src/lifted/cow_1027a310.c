/* f_0x1027a310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1027a310(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_30;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u) goto L_1027a4b7;
    if (arg2 != 0u) goto L_1027a334;
    if (arg3 == 0u) goto L_1027a4b7;
L_1027a334: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1028a380u), self, 1, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_1027a366;
    }
    ecx = t2;
    edx = t3;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, 1u, COW_IMG(0x103b37ecu), 0x880u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u) goto L_1027a4c1;
    ecx = t5;
    edx = t6;
    esi = t4;
    wr8(esi, 0u);
L_1027a366: ;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x1028a600u), ecx, 5, arg3, in_edi, in_esi, in_ebp, in_ebx);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        ecx = t8;
        edx = t9;
        edi = t7;
        goto L_1027a3ae;
    }
    ecx = t8;
    edx = t9;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, 1u, COW_IMG(0x103b37ecu), 0x88au);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        ecx = t11;
        edx = t12;
        edi = t10;
        goto L_1027a3ab;
    }
    ecx = t11;
    edx = t12;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, esi, COW_IMG(0x103b37ecu), 0x88du);
    return 0u;
L_1027a3ab: ;
    wr8(edi, 0u);
L_1027a3ae: ;
    wr8(arg1, 0u);
    if (rd32(COW_IMG(0x1099d208u)) != 0u)
    {
        eax = rd32(COW_IMG(0x1099d208u));
        goto L_1027a3ee;
    }
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, arg1, COW_IMG(0x10350ff8u), esi, arg3, in_edi);
    t13 = g->ecx;
    t14 = rd32(COW_IMG(0x1099d208u)) + 1u;
    wr32(COW_IMG(0x1099d208u), t14);
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, esi, COW_IMG(0x103b37ecu), 0x89bu);
    t15 = g->ecx;
    t16 = g->edx;
    ecx = t15;
    edx = t16;
    loc_30 = 0x89cu;
L_1027a471: ;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103b37ecu), loc_30);
    return 1u;
L_1027a3ee: ;
    if (eax != 1u) goto L_1027a43d;
    eax = arg3;
L_1027a3f9: ;
    t17 = rd8(eax);
    wr8(arg1 + eax - arg3, (uint8_t)t17);
    if ((uint8_t)t17 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t17;
        goto L_1027a3f9;
    }
    ecx = (ecx & 0xffffff00u) | t17;
    t18 = rd32(COW_IMG(0x1099d208u)) + 1u;
    wr32(COW_IMG(0x1099d208u), t18);
    g->ecx = ecx;
    g->edx = t18;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, esi, COW_IMG(0x103b37ecu), 0x8a4u);
    t19 = g->ecx;
    t20 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103b37ecu), 0x8a5u);
    return 1u;
L_1027a43d: ;
    if (eax != 2u) goto L_1027a489;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, arg1, COW_IMG(0x10350ff8u), esi, edi, in_edi);
    t21 = g->ecx;
    t22 = rd32(COW_IMG(0x1099d208u)) + 1u;
    wr32(COW_IMG(0x1099d208u), t22);
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, esi, COW_IMG(0x103b37ecu), 0x8adu);
    t23 = g->ecx;
    t24 = g->edx;
    ecx = t23;
    edx = t24;
    loc_30 = 0x8aeu;
    goto L_1027a471;
L_1027a489: ;
    if (esi != 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, esi, COW_IMG(0x103b37ecu), 0x8b2u);
        t25 = g->ecx;
        t26 = g->edx;
        ecx = t25;
        edx = t26;
    }
    if (edi != 0u)
    {
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103b37ecu), 0x8b3u);
    }
L_1027a4b7: ;
    wr32(COW_IMG(0x1099d208u), 0u);
L_1027a4c1: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027a310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027a310(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
