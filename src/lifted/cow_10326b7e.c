/* f_0x10326b7e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10326b7e(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10326be2;
    }
    g->esp = sp0 - 0x18u;
    t1 = cow_call_regs(g, COW_IMG(0x10326dc4u), g->eax, self, in_edx, 1, 2, arg1, 0x3du);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10326be2;
    }
    eax = t1;
    edx = t2;
    esi = t1;
    loc_c = t1;
    if (arg1 == esi) goto L_10326be2;
    if (rd32(COW_IMG(0x109b26e4u)) != rd32(COW_IMG(0x109b26e8u)))
    {
        eax = rd32(COW_IMG(0x109b26e4u));
        ecx = 0x3du;
        ebx = rd8(esi + 1u) == 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x109b26e4u));
        ebx = rd8(esi + 1u) == 0u;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t3 = cow_cdecl(g, COW_IMG(0x10326d5du), 3, eax, in_edi, in_esi);
        t4 = g->edx;
        wr32(COW_IMG(0x109b26e4u), t3);
        ecx = eax;
        eax = t3;
        edx = t4;
    }
    if (eax != 0u) goto L_10326c20;
    if (arg2 == 0u) goto L_10326bea;
    if (rd32(COW_IMG(0x109b26ecu)) == 0u) goto L_10326bea;
    g->esp = sp0 - 0x18u;
    t5 = cow_fastcall(g, COW_IMG(0x10326637u), ecx, edx, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        ecx = t6;
        edx = t7;
        goto L_10326c20;
    }
    eax = t5;
    edx = t7;
L_10326be2: ;
    eax = 0xffffffffu;
L_10326be5: ;
    g->edx = edx;
    return eax;
L_10326bea: ;
    if (ebx != 0u) goto L_10326cfe;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 4u, in_edi, in_esi);
    t9 = g->edx;
    wr32(COW_IMG(0x109b26e4u), t8);
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
        goto L_10326be2;
    }
    eax = t8;
    edx = t9;
    wr32(eax, 0u);
    if (rd32(COW_IMG(0x109b26ecu)) != 0u)
    {
        ecx = 4u;
        goto L_10326c20;
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, 4u, in_edi, in_esi);
    t11 = g->edx;
    wr32(COW_IMG(0x109b26ecu), t10);
    if (t10 == 0u)
    {
        eax = t10;
        edx = t11;
        goto L_10326be2;
    }
    eax = t10;
    edx = t11;
    wr32(eax, 0u);
    ecx = 4u;
L_10326c20: ;
    g->edx = edx;
    t12 = rd32(COW_IMG(0x109b26e4u));
    g->esp = sp0 - 0x18u;
    t13 = cow_cdecl(g, COW_IMG(0x10326d05u), 2, arg1, esi - arg1);
    t14 = g->edx;
    if ((int32_t)t13 < 0)
    {
        ecx = esi - arg1;
        edx = t14;
        esi = t13;
        edi = t12;
        goto L_10326c80;
    }
    eax = t13;
    ecx = esi - arg1;
    edx = t14;
    esi = t13;
    edi = t12;
    loc_8 = t12;
    if (rd32(edi) == 0u) goto L_10326c80;
    if (ebx == 0u) goto L_10326c78;
    t15 = rd32(edi + esi * 4u);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, t15, in_edi, in_esi);
    t16 = g->edx;
    ecx = t15;
    edx = t16;
    edi = edi + esi * 4u;
L_10326c52: ;
    if (rd32(edi) == 0u) goto L_10326c62;
    t17 = rd32(edi + 4u);
    wr32(edi, t17);
    esi = esi + 1u;
    edi = edi + 4u;
    goto L_10326c52;
L_10326c62: ;
    g->esp = sp0 - 0x14u;
    t18 = cow_call_regs(g, COW_IMG(0x10313110u), g->eax, ecx, edx, 1, 3, loc_8, esi << 2u, in_edi);
    t19 = g->edx;
    if (t18 == 0u)
    {
        eax = t18;
        ecx = esi << 2u;
        edx = t19;
        goto L_10326cb2;
    }
    eax = t18;
    ecx = esi << 2u;
    edx = t19;
L_10326cad: ;
    wr32(COW_IMG(0x109b26e4u), eax);
L_10326cb2: ;
    if (arg2 != 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t23 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, arg1);
        t24 = g->ecx;
        t25 = g->edx;
        g->edx = t25;
        g->esp = sp0 - 0x14u;
        t26 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, t23 + 2u, arg1, in_edi);
        t27 = g->edx;
        if (t26 == 0u)
        {
            edx = t27;
        }
        else
        {
            edx = t27;
            esi = t26;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x10317500u), 3, esi, arg1, in_edi);
            t28 = g->edx;
            wr8(esi + loc_c - arg1, 0u);
            t29 = ~-(ebx != 0u) & esi + loc_c - arg1 + 1u;
            g->eax = esi + loc_c - arg1 + 1u;
            g->edx = t28;
            g->esp = sp0 - 0x18u;
            t30 = cow_thiscall(g, rd32(COW_IMG(0x103292f8u)), arg1, 2, esi, t29);
            t31 = g->ecx;
            t32 = g->edx;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t31, t32, 1, 3, esi, in_edi, in_esi);
            t33 = g->edx;
            edx = t33;
        }
    }
L_10326cfe: ;
    eax = 0u;
    goto L_10326be5;
L_10326c78: ;
    wr32(edi + esi * 4u, arg1);
    eax = arg1;
    goto L_10326cb2;
L_10326c80: ;
    if (ebx != 0u) goto L_10326cfe;
    if ((int32_t)esi < 0)
    {
        esi = -esi;
    }
    t20 = esi * 4u + 8u;
    g->esp = sp0 - 0x14u;
    t21 = cow_call_regs(g, COW_IMG(0x10313110u), g->eax, ecx, edx, 1, 3, edi, t20, in_edi);
    t22 = g->edx;
    if (t21 == 0u)
    {
        eax = t21;
        edx = t22;
        goto L_10326be2;
    }
    eax = t21;
    edx = t22;
    wr32(eax + esi * 4u, arg1);
    wr32(eax + esi * 4u + 4u, 0u);
    ecx = arg1;
    goto L_10326cad;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10326b7e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10326b7e(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
