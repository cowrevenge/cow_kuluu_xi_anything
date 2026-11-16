/* f_0x102f59ab - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102f59ab(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
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

    if ((int32_t)rd32(in_esi + 0x1cu) > 65500) goto L_102f59ba;
    if ((int32_t)rd32(in_esi + 0x18u) <= 65500)
    {
        ecx = self;
        edx = in_edx;
        goto L_102f59ce;
    }
L_102f59ba: ;
    wr32(rd32(in_esi) + 0x14u, 0x28u);
    t1 = rd32(in_esi);
    wr32(t1 + 0x18u, 0xffdcu);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(in_esi)), t1, 0);
    t2 = g->edx;
    ecx = in_esi;
    edx = t2;
L_102f59ce: ;
    if (rd32(in_esi + 0xc0u) != 8u)
    {
        wr32(rd32(in_esi) + 0x14u, 0xdu);
        t3 = rd32(in_esi + 0xc0u);
        t4 = rd32(in_esi);
        wr32(t4 + 0x18u, t3);
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(in_esi)), t4, 0);
        t5 = g->edx;
        ecx = in_esi;
        edx = t5;
    }
    if ((int32_t)rd32(in_esi + 0x20u) > 10)
    {
        wr32(rd32(in_esi) + 0x14u, 0x18u);
        t6 = rd32(in_esi + 0x20u);
        wr32(rd32(in_esi) + 0x18u, t6);
        t7 = rd32(in_esi);
        wr32(t7 + 0x1cu, 0xau);
        g->edx = t6;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(in_esi)), t7, 0);
        t8 = g->edx;
        ecx = in_esi;
        edx = t8;
    }
    t9 = rd32(in_esi + 0xc4u);
    t10 = rd32(in_esi + 0x20u);
    wr32(in_esi + 0x10cu, 1u);
    wr32(in_esi + 0x110u, 1u);
    if ((int32_t)t10 > 0)
    {
        edi = t9;
        ebx = 0u;
        edi = edi + 0xcu;
L_102f5a34: ;
        if ((int32_t)rd32(edi - 4u) <= 0) goto L_102f5a4b;
        eax = rd32(edi - 4u);
        if ((int32_t)eax > 4) goto L_102f5a4b;
        if ((int32_t)rd32(edi) <= 0) goto L_102f5a4b;
        eax = rd32(edi);
        if ((int32_t)eax <= 4) goto L_102f5a5a;
L_102f5a4b: ;
        wr32(rd32(in_esi) + 0x14u, 0x10u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(rd32(in_esi)), ecx, 0);
        t11 = g->edx;
        edx = t11;
L_102f5a5a: ;
        if ((int32_t)rd32(in_esi + 0x10cu) > (int32_t)rd32(edi - 4u))
        {
            eax = rd32(in_esi + 0x10cu);
        }
        else
        {
            ecx = rd32(edi - 4u);
            eax = ecx;
        }
        wr32(in_esi + 0x10cu, eax);
        if ((int32_t)rd32(in_esi + 0x110u) > (int32_t)rd32(edi))
        {
            eax = rd32(in_esi + 0x110u);
            ecx = rd32(edi);
        }
        else
        {
            ecx = rd32(edi);
            eax = ecx;
        }
        wr32(in_esi + 0x110u, eax);
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(in_esi + 0x20u))
        {
            ebx = ebx + 1u;
            edi = edi + 0x54u;
            goto L_102f5a34;
        }
    }
    t12 = rd32(in_esi + 0xc4u);
    t13 = rd32(in_esi + 0x20u);
    wr32(in_esi + 0x114u, 8u);
    if ((int32_t)t13 > 0)
    {
        eax = t12;
        ebx = 0u;
        edi = eax + 0x1cu;
L_102f5aa6: ;
        wr32(edi + 8u, 8u);
        t14 = rd32(in_esi + 0x10cu) << 3u;
        t15 = rd32(edi - 0x14u) * rd32(in_esi + 0x18u);
        g->eax = t15;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t16 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t15, t14);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(edi, t16);
        t19 = rd32(in_esi + 0x110u) << 3u;
        t20 = rd32(edi - 0x10u) * rd32(in_esi + 0x1cu);
        g->eax = t20;
        g->ecx = t17;
        g->edx = t18;
        g->esp = sp0 - 0x10u;
        t21 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t20, t19);
        t22 = g->ecx;
        t23 = g->edx;
        wr32(edi + 4u, t21);
        t24 = rd32(in_esi + 0x10cu);
        t25 = rd32(edi - 0x14u) * rd32(in_esi + 0x18u);
        g->eax = t25;
        g->ecx = t22;
        g->edx = t23;
        g->esp = sp0 - 0x18u;
        t26 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t25, t24);
        t27 = g->ecx;
        t28 = g->edx;
        wr32(edi + 0xcu, t26);
        t29 = rd32(in_esi + 0x110u);
        t30 = rd32(edi - 0x10u) * rd32(in_esi + 0x1cu);
        g->eax = t30;
        g->ecx = t27;
        g->edx = t28;
        g->esp = sp0 - 0x20u;
        t31 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t30, t29);
        t32 = g->ecx;
        t33 = g->edx;
        wr32(edi + 0x30u, 0u);
        wr32(edi + 0x10u, t31);
        wr8(edi + 0x14u, 1u);
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(in_esi + 0x20u))
        {
            ecx = t32;
            edx = t33;
            ebx = ebx + 1u;
            edi = edi + 0x54u;
            goto L_102f5aa6;
        }
        ecx = t32;
        edx = t33;
    }
    t34 = rd32(in_esi + 0x110u) << 3u;
    t35 = rd32(in_esi + 0x1cu);
    g->eax = t34;
    g->esp = sp0 - 8u;
    t36 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t35, t34);
    wr32(in_esi + 0x118u, t36);
    if ((int32_t)rd32(in_esi + 0x120u) < (int32_t)rd32(in_esi + 0x20u)) goto L_102f5b5b;
    if (rd8(in_esi + 0xc8u) != 0u) goto L_102f5b5b;
    wr8(rd32(in_esi + 0x18cu) + 0x10u, 0u);
    return;
L_102f5b5b: ;
    wr8(rd32(in_esi + 0x18cu) + 0x10u, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f59ab(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f59ab(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
