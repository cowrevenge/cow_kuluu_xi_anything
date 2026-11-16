/* f_0x102b3500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102b3500(Guest* g)
{
    double d15;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;

    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(sp0 + 4u);
        ecx = rd32(rd32(sp0 + 4u) + 0x34u);
        edx = in_edx;
        goto L_102b365f;
    }
    eax = rd32(sp0 + 4u);
    ecx = rd32(rd32(sp0 + 4u) + 0x34u);
    if (rd32(ecx + 0x14u) == 0u)
    {
        edx = rd32(ecx + 0x14u);
        goto L_102b365f;
    }
    edx = rd32(ecx + 0x14u);
    if (rd32(eax + 0x4cu) != 0u)
    {
        edi = rd32(eax + 0x4cu);
        goto L_102b3532;
    }
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x102b3360u), eax, ecx, edx);
L_102b3532: ;
    if ((int32_t)rd32(eax + 0x44u) <= 0)
    {
        edx = rd32(eax + 0x44u);
        esi = 0u;
    }
    else
    {
        edx = rd32(eax + 0x44u);
        ecx = rd32(eax + 0x48u);
        esi = 0u;
L_102b3541: ;
        if ((int32_t)rd32(ecx) > (int32_t)esi)
        {
            eax = rd32(ecx);
            esi = eax;
        }
        if (edx != 1u)
        {
            ecx = ecx + 4u;
            edx = edx - 1u;
            goto L_102b3541;
        }
        ecx = ecx + 4u;
        edx = edx - 1u;
    }
    t1 = (esi - 3u) * edi;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t1, 0xcu, COW_IMG(0x103bfd88u), 0x275u, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    g->ecx = t3;
    g->edx = t4;
    g->esp = sp0 - 0x24u;
    t5 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t1, 0xcu, COW_IMG(0x103bfd88u), 0x276u, t1);
    t6 = g->ecx;
    t7 = g->edx;
    g->esp = sp0 - 0x34u;
    t8 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t1, 4u, COW_IMG(0x103bfd88u), 0x277u, t1);
    if ((int32_t)t1 <= 0)
    {
        ecx = t8;
        ebp = t2;
        esi = t1;
        edi = t5;
        loc_4 = t2;
        loc_8 = t8;
        goto L_102b35aa;
    }
    eax = 0u;
    ecx = t8;
    ebp = t2;
    esi = t1;
    edi = t5;
    loc_4 = t2;
    loc_8 = t8;
L_102b35a2: ;
    wr32(eax * 4u + ecx, eax);
    if ((int32_t)(eax + 1u) < (int32_t)esi)
    {
        eax = eax + 1u;
        goto L_102b35a2;
    }
L_102b35aa: ;
    if ((int32_t)rd32(rd32(sp0 + 4u) + 0x44u) <= 0)
    {
        edx = rd32(sp0 + 4u);
        goto L_102b3624;
    }
    edx = rd32(sp0 + 4u);
    ebx = 0u;
L_102b35b7: ;
    t9 = rd32(sp0 + 4u);
    g->eax = t9;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x102ae020u), 7, t9, ebx, esi, ebp, edi, in_esi, in_ebp);
    t11 = g->ecx;
    t12 = g->edx;
    if ((int32_t)esi <= 0)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    else
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        wr32(sp0 + 8u, esi);
        ebp = edi;
L_102b35d2: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x10274910u), 1, ebp);
        t13 = g->ecx;
        t14 = g->edx;
        d15 = cow_take_float(g);
        t16 = rd32(sp0 + 8u) - 1u;
        t17 = rd32(sp0 + 8u);
        wr32(sp0 + 8u, t16);
        if (t17 != 1u)
        {
            eax = t16;
            ecx = t13;
            edx = t14;
            ebp = ebp + 0xcu;
            goto L_102b35d2;
        }
        eax = t16;
        ecx = t13;
        edx = t14;
        ebp = loc_4;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t18 = cow_cdecl(g, COW_IMG(0x1028a750u), 2, ebp, esi);
    t19 = g->ecx;
    t20 = g->edx;
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0x20u;
    t21 = cow_cdecl(g, COW_IMG(0x1028a770u), 1, edi);
    t22 = g->ecx;
    t23 = g->edx;
    g->edx = t23;
    g->esp = sp0 - 0x24u;
    t24 = cow_stdcall(g, COW_IMG(0x1028b000u), 0);
    t25 = g->edx;
    g->ecx = loc_8;
    g->edx = t25;
    t26 = cow_cdecl(g, COW_IMG(0x1028a820u), 3, 3u, esi, loc_8);
    t27 = g->ecx;
    t28 = g->edx;
    g->ecx = t27;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, COW_IMG(0x1028bbf0u), 0);
    t29 = g->ecx;
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(rd32(sp0 + 4u) + 0x44u))
    {
        ecx = t29;
        edx = rd32(sp0 + 4u);
        ebx = ebx + 1u;
        goto L_102b35b7;
    }
    edx = rd32(sp0 + 4u);
    ecx = loc_8;
L_102b3624: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ecx, COW_IMG(0x103bfd88u), 0x29cu);
    t30 = g->ecx;
    t31 = g->edx;
    g->ecx = t30;
    g->edx = t31;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103bfd88u), 0x29du);
    t32 = g->ecx;
    t33 = g->edx;
    g->edx = t33;
    g->esp = sp0 - 0x30u;
    t34 = cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103bfd88u), 0x29eu);
    t35 = g->edx;
    g->edx = t35;
    return t34;
L_102b365f: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t36 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bfd88u));
    t37 = g->ecx;
    t38 = g->edx;
    wr32(sp0 + 8u, COW_IMG(0x103bfd80u));
    wr32(sp0 + 4u, COW_IMG(0x103beaa4u));
    g->esp = sp0;
    g->edx = t38;
    return cow_tailcall(g, COW_IMG(0x102858b0u), t36, t37, t38);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b3500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b3500(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
