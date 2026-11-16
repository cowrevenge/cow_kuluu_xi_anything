/* f_0x102b3360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102b3360(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const double xin0 = ST(0);
    const double xin1 = ST(1);
    const double xin2 = ST(2);
    const double xin3 = ST(3);
    const double xin4 = ST(4);
    const double xin5 = ST(5);
    const double xin6 = ST(6);
    const double xin7 = ST(7);

    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = in_eax;
        goto L_102b34c5;
    }
    esi = rd32(sp0 + 4u);
    edi = rd32(rd32(sp0 + 4u) + 0x34u);
    if (rd32(edi + 0x14u) == 0u)
    {
        eax = rd32(edi + 0x14u);
        goto L_102b34c5;
    }
    eax = rd32(edi + 0x14u);
    if (edi == 0u) goto L_102b338d;
    t1 = rd32(edi + 0x54u);
    t2 = rd32(edi + 0x54u);
    wr32(sp0 + 4u, t1);
    if (t2 != 0u)
    {
        eax = t1;
        goto L_102b33b3;
    }
    eax = t1;
L_102b338d: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t33 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bfd88u));
    t34 = g->ecx;
    t35 = g->edx;
    g->edx = t35;
    g->esp = sp0 - 0x18u;
    t36 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf050u), COW_IMG(0x103b379cu));
    t37 = g->edx;
    g->edx = t37;
    return t36;
L_102b33b3: ;
    if (rd32(edi + 0x58u) != 0u)
    {
        ebp = rd32(edi + 0x58u);
        goto L_102b33e0;
    }
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bfd88u));
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0 - 0x18u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bfdb8u), COW_IMG(0x103b379cu));
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_102b33e0: ;
    if ((int32_t)rd32(edi + 0x14u) <= (int32_t)rd32(esi + 0x5cu))
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(edi + 0x14u);
        t8 = rd32(esi + 0x60u);
        g->esp = sp0 - 0x10u;
        t9 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), t8, 4, t8, eax << 2u, COW_IMG(0x103bfd88u), 0x21du);
        t10 = rd32(esi + 0x5cu);
        wr32(esi + 0x60u, t9);
        if ((int32_t)t10 >= (int32_t)rd32(edi + 0x14u)) goto L_102b341c;
        eax = t9;
        ecx = t10;
L_102b3411: ;
        wr32(eax + ecx * 4u, ecx);
        if ((int32_t)(ecx + 1u) < (int32_t)rd32(edi + 0x14u))
        {
            ecx = ecx + 1u;
            goto L_102b3411;
        }
L_102b341c: ;
        t11 = rd32(edi + 0x14u);
        wr32(esi + 0x5cu, t11);
        edx = t11;
    }
    t12 = rd32(edi + 0x14u);
    t13 = rd32(sp0 + 4u);
    t14 = rd32(esi + 0x60u);
    g->eax = t12;
    g->ecx = t13;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t15 = cow_cdecl(g, COW_IMG(0x1028a750u), 2, t13, t12);
    t16 = g->ecx;
    t17 = g->edx;
    g->ecx = t16;
    g->edx = t17;
    g->esp = sp0 - 0x1cu;
    t18 = cow_cdecl(g, COW_IMG(0x1028a770u), 1, ebp);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = rd32(edi + 0x64u);
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0x20u;
    t22 = cow_cdecl(g, COW_IMG(0x1028a7f0u), 2, t21, 0u);
    t23 = g->ecx;
    t24 = g->edx;
    g->ecx = t23;
    g->edx = t24;
    fpush(g, xin0);
    fpush(g, xin1);
    fpush(g, xin2);
    fpush(g, xin3);
    fpush(g, xin4);
    fpush(g, xin5);
    fpush(g, xin6);
    fpush(g, xin7);
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x1028b000u), 0);
    t25 = g->ecx;
    t26 = g->edx;
    if (rd32(esi + 0x64u) == 0u)
    {
        eax = rd32(esi + 0x44u);
        ecx = t25;
        edx = t26;
        ebx = t14;
        goto L_102b3494;
    }
    eax = rd32(esi + 0x44u);
    ecx = t25;
    ebp = rd32(esi + 0x64u);
    loc_4 = t14;
    if ((int32_t)eax <= 0)
    {
        edx = rd32(esi + 0x48u);
        goto L_102b34b9;
    }
    ebx = rd32(rd32(esi + 0x48u));
    edi = 0u;
L_102b3466: ;
    t27 = loc_4 + rd32(ebp + edi * 4u) * ebx * 4u;
    g->ecx = loc_4;
    g->edx = t27;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x1028a820u), 3, 3u, ebx, t27);
    t28 = g->ecx;
    t29 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(esi + 0x44u))
    {
        edi = edi + 1u;
        goto L_102b3466;
    }
    eax = rd32(esi + 0x44u);
    ecx = t28;
    edx = t29;
    g->esp = sp0;
    g->edx = edx;
    g->top = (g->top + 8u) & 7u;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b3494: ;
    if ((int32_t)eax <= 0) goto L_102b34b9;
    edi = ebx;
    ebx = 0u;
L_102b349c: ;
    t30 = rd32(ebx * 4u + rd32(esi + 0x48u));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x1028a820u), 3, 3u, t30, edi);
    t31 = g->ecx;
    t32 = g->edx;
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(esi + 0x44u))
    {
        ecx = t31;
        edx = t32;
        ebx = ebx + 1u;
        edi = edi + t30 * 4u;
        goto L_102b349c;
    }
    eax = rd32(esi + 0x44u);
    ecx = t31;
    edx = t32;
L_102b34b9: ;
    g->esp = sp0;
    g->edx = edx;
    g->top = (g->top + 8u) & 7u;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b34c5: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t38 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bfd88u));
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 + 8u, COW_IMG(0x103bfd80u));
    wr32(sp0 + 4u, COW_IMG(0x103beaa4u));
    g->esp = sp0;
    g->edx = t40;
    return cow_tailcall(g, COW_IMG(0x102858b0u), t38, t39, t40);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b3360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b3360(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
