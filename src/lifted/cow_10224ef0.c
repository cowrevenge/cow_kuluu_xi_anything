/* f_0x10224ef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10224ef0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
    uint32_t loc_8c;
    uint32_t loc_90;
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
    uint32_t t41;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 152u);

    wr32(sp0 - 0x84u, in_esi);
    t1 = rd32(rd32(COW_IMG(0x10667148u)) + 0x30u);
    wr32(sp0 - 0x88u, t1);
    g->eax = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10667148u));
    g->esp = sp0 - 0x84u;
    t3 = cow_thiscall(g, COW_IMG(0x10224120u), t2, 1, t1);
    t4 = g->edx;
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        edx = t4;
        esi = t2;
        loc_84 = in_esi;
    }
    else
    {
        edx = t4;
        esi = t2;
        if (rd32(esi + 0x64u) != 3u)
        {
            eax = rd32(esi + 0x64u);
            goto L_10224f43;
        }
        eax = rd32(esi + 0x64u);
        t5 = rd32(esi + 0x30u);
        wr32(sp0 - 0x88u, t5);
        g->eax = eax;
        g->esp = sp0 - 0x84u;
        t6 = cow_thiscall(g, COW_IMG(0x10224120u), esi, 1, t5);
        t7 = rd32(arg2 + 4u);
        wr32(sp0 - 0x88u, t7);
        wr32(sp0 - 0x8cu, t6);
        t8 = cow_call_regs(g, COW_IMG(0x10223930u), t6, t7, arg2, 1, 2, t6, t7);
        t9 = g->edx;
        g->ecx = t8;
        g->esp = sp0 - 0x88u;
        t10 = cow_stdcall(g, COW_IMG(0x10223a90u), 1, rd32(sp0 - 0x8cu));
        t11 = g->ecx;
        wr32(sp0 - 0x8cu, t10);
        wr32(sp0 - 0x90u, COW_IMG(0x1038621cu));
        eax = t10;
        ecx = t11;
        loc_8c = t10;
        loc_90 = COW_IMG(0x1038621cu);
L_10224fa1: ;
        wr32(sp0 - 0x94u, sp0 - 0x80u);
        edx = sp0 - 0x80u;
L_10224fa6: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x80u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, loc_90, loc_8c, rd32(sp0 - 0x88u), rd32(sp0 - 0x84u));
        t27 = g->ecx;
        t28 = g->edx;
        wr32(sp0 - 0x88u, 0u);
        wr32(sp0 - 0x8cu, sp0 - 0x80u);
        g->eax = sp0 - 0x80u;
        g->edx = t28;
        g->esp = sp0 - 0x84u;
        t29 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x80u, 0u);
        t30 = g->edx;
        eax = t29;
        edx = t30;
        esi = rd32(COW_IMG(0x10667148u));
        loc_84 = rd32(sp0 - 0x84u);
    }
    wr32(sp0 - 0x88u, 1u);
    t31 = rd32(esi + 8u);
    wr32(sp0 - 0x8cu, t31);
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t32 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t31, 1u);
    t33 = g->edx;
    wr32(sp0 - 0x88u, COW_IMG(0x1036f5a0u));
    g->edx = t33;
    t34 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f5a0u));
    t35 = g->edx;
    wr32(sp0 - 0x88u, COW_IMG(0x1036ff80u));
    g->edx = t35;
    t36 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036ff80u));
    t37 = g->edx;
    wr32(sp0 - 0x88u, COW_IMG(0x10370248u));
    g->edx = t37;
    t38 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10370248u));
    t39 = g->edx;
    wr32(sp0 - 0x88u, COW_IMG(0x1037002cu));
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037002cu));
    t41 = g->edx;
    g->esi = rd32(sp0 - 0x84u);
    g->edx = t41;
    return t40;
L_10224f43: ;
    if (eax != 0x14u) goto L_10224f78;
    t12 = rd32(esi + 0x30u);
    wr32(sp0 - 0x88u, t12);
    g->eax = t12;
    g->esp = sp0 - 0x84u;
    t13 = cow_thiscall(g, COW_IMG(0x10224120u), esi, 1, t12);
    t14 = rd32(arg2 + 4u);
    wr32(sp0 - 0x88u, t14);
    wr32(sp0 - 0x8cu, t13);
    t15 = cow_call_regs(g, COW_IMG(0x10223930u), t13, arg2, t14, 1, 2, t13, t14);
    t16 = g->edx;
    g->ecx = t15;
    g->edx = t16;
    g->esp = sp0 - 0x88u;
    t17 = cow_stdcall(g, COW_IMG(0x10223a90u), 1, rd32(sp0 - 0x8cu));
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x8cu, t17);
    wr32(sp0 - 0x90u, COW_IMG(0x10386204u));
    wr32(sp0 - 0x94u, sp0 - 0x80u);
    eax = sp0 - 0x80u;
    ecx = t18;
    edx = t19;
    loc_8c = t17;
    loc_90 = COW_IMG(0x10386204u);
    goto L_10224fa6;
L_10224f78: ;
    t20 = rd32(esi + 0x30u);
    wr32(sp0 - 0x88u, t20);
    g->eax = eax;
    g->esp = sp0 - 0x84u;
    t21 = cow_thiscall(g, COW_IMG(0x10224120u), esi, 1, t20);
    t22 = rd32(arg2 + 4u);
    wr32(sp0 - 0x88u, t22);
    wr32(sp0 - 0x8cu, t21);
    t23 = cow_call_regs(g, COW_IMG(0x10223930u), t21, t22, arg2, 1, 2, t21, t22);
    t24 = g->edx;
    g->ecx = t23;
    g->esp = sp0 - 0x88u;
    t25 = cow_stdcall(g, COW_IMG(0x10223a90u), 1, rd32(sp0 - 0x8cu));
    t26 = g->ecx;
    wr32(sp0 - 0x8cu, t25);
    wr32(sp0 - 0x90u, COW_IMG(0x103861f0u));
    eax = t25;
    ecx = t26;
    loc_8c = t25;
    loc_90 = COW_IMG(0x103861f0u);
    goto L_10224fa1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10224ef0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10224ef0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
