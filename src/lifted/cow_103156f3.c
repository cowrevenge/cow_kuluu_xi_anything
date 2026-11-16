/* f_0x103156f3 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_103156f3(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_110;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 284u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x100u, in_ebx);
    wr32(sp0 - 0x104u, in_esi);
    wr32(sp0 - 0x108u, in_edi);
    if (rd32(sp0 + 8u) >= 2u)
    {
        esi = rd32(sp0 + 8u);
        if (arg3 != 0u)
        {
            wr32(sp0 - 8u, 0u);
            t1 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, sp0 - 0x84u);
            wr32(sp0 + 8u, sp0 - 0xfcu);
            ecx = self;
            ebx = t1;
            esi = t1 + (esi - 1u) * arg3;
            loc_8 = 0u;
L_10315732: ;
            t2 = cow_divu(g, esi - ebx, arg3);
            t3 = cow_modu(g, esi - ebx, arg3);
            if (t2 + 1u > 8u)
            {
                eax = t2 + 1u;
                edx = t3;
                goto L_10315772;
            }
            eax = t2 + 1u;
            edx = t3;
            wr32(sp0 - 0x10cu, arg4);
            wr32(sp0 - 0x110u, arg3);
            wr32(sp0 - 0x114u, esi);
            wr32(sp0 - 0x118u, ebx);
            g->ecx = ecx;
            g->esp = sp0 - 0x108u;
            cow_call_regs(g, COW_IMG(0x10315847u), g->eax, g->ecx, edx, 1, 4, ebx, esi, arg3, arg4);
            t4 = g->ecx;
            ecx = t4;
L_10315751: ;
            wr32(sp0 - 8u, loc_8 - 1u);
            wr32(sp0 + 8u, rd32(sp0 + 8u) - 4u);
            wr32(sp0 + 4u, rd32(sp0 + 4u) - 4u);
            if ((int32_t)(loc_8 - 1u) < 0) goto L_10315842;
            loc_8 = loc_8 - 1u;
            ebx = rd32(rd32(sp0 + 8u));
            esi = rd32(rd32(sp0 + 4u));
            goto L_10315732;
        }
    }
L_10315842: ;
    g->ebx = in_ebx;
    return;
L_10315772: ;
    wr32(sp0 - 0x10cu, arg3);
    wr32(sp0 - 0x110u, ebx);
    t5 = ebx + (eax >> 1u) * arg3;
    wr32(sp0 - 0x114u, t5);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    cow_cdecl(g, COW_IMG(0x10315895u), 3, t5, ebx, arg3);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0xcu, ebx);
    ecx = t6;
    edx = t7;
    edi = arg3 + esi;
    loc_c = ebx;
L_10315789: ;
    wr32(sp0 - 0xcu, arg3 + loc_c);
    if (arg3 + loc_c > esi)
    {
        eax = arg3 + loc_c;
        loc_c = arg3 + loc_c;
        goto L_103157a1;
    }
    eax = arg3 + loc_c;
    loc_c = arg3 + loc_c;
    wr32(sp0 - 0x10cu, ebx);
    wr32(sp0 - 0x110u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    t8 = cow_thiscall_cdecl(g, arg4, ecx, 2, eax, ebx);
    t9 = g->edx;
    if ((int32_t)t8 <= 0)
    {
        ecx = rd32(sp0 - 0x10cu);
        edx = t9;
        goto L_10315789;
    }
    eax = t8;
    ecx = rd32(sp0 - 0x10cu);
    edx = t9;
L_103157a1: ;
    if (edi - arg3 <= ebx)
    {
        edi = edi - arg3;
        goto L_103157b3;
    }
    edi = edi - arg3;
    wr32(sp0 - 0x10cu, ebx);
    wr32(sp0 - 0x110u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    t10 = cow_thiscall_cdecl(g, arg4, ecx, 2, edi, ebx);
    t11 = g->edx;
    if ((int32_t)t10 >= 0)
    {
        eax = t10;
        ecx = rd32(sp0 - 0x10cu);
        edx = t11;
        goto L_103157a1;
    }
    eax = t10;
    ecx = rd32(sp0 - 0x10cu);
    edx = t11;
L_103157b3: ;
    wr32(sp0 - 0x10cu, arg3);
    wr32(sp0 - 0x110u, edi);
    if (edi < loc_c)
    {
        loc_110 = edi;
        goto L_103157c9;
    }
    loc_110 = edi;
    wr32(sp0 - 0x114u, loc_c);
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    cow_cdecl(g, COW_IMG(0x10315895u), 3, loc_c, loc_110, arg3);
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
    goto L_10315789;
L_103157c9: ;
    wr32(sp0 - 0x114u, ebx);
    g->ebx = ebx;
    g->esp = sp0 - 0x108u;
    cow_cdecl(g, COW_IMG(0x10315895u), 3, ebx, loc_110, arg3);
    if ((int32_t)(edi - ebx - 1u) < (int32_t)(esi - rd32(sp0 - 0xcu)))
    {
        eax = rd32(sp0 - 0xcu);
        ecx = edi - ebx - 1u;
        goto L_10315812;
    }
    eax = rd32(sp0 - 0xcu);
    if (arg3 + ebx >= edi)
    {
        ecx = arg3;
    }
    else
    {
        t14 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t14 + 4u);
        t15 = rd32(sp0 - 8u) + 1u;
        wr32(sp0 - 8u, t15);
        t16 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t16 + 4u);
        wr32(t14, ebx);
        wr32(t16, edi - arg3);
        ecx = t16;
        loc_8 = t15;
    }
    if (eax >= esi) goto L_10315751;
    ebx = eax;
    goto L_10315732;
L_10315812: ;
    if (eax < esi)
    {
        t17 = rd32(sp0 - 8u) + 1u;
        wr32(sp0 - 8u, t17);
        t18 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t18 + 4u);
        wr32(t18, eax);
        t19 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t19 + 4u);
        wr32(t19, esi);
        ecx = t18;
        loc_8 = t17;
    }
    if (arg3 + ebx >= edi) goto L_10315751;
    esi = edi - arg3;
    goto L_10315732;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103156f3(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103156f3(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
