/* f_0x102eec20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102eec20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    ecx = self;
    edx = in_edx;
L_102eec2c: ;
    if (rd32(arg1 + 0x178u) != 0u) goto L_102eec57;
    if (rd8(rd32(arg1 + 0x190u) + 0x50u) != 0u)
    {
        eax = rd32(arg1 + 0x190u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x102eeab2u), g->eax, ecx, edx, 1, 3, arg1, in_edi, in_esi);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    else
    {
        eax = rd32(arg1 + 0x190u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x102eeb89u), g->eax, ecx, edx, 1, 3, arg1, in_edi, in_esi);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if ((uint8_t)eax == 0u) goto L_102eee07;
    ecx = arg1;
L_102eec57: ;
    if ((int32_t)rd32(arg1 + 0x178u) > 207)
    {
        eax = rd32(arg1 + 0x178u);
        goto L_102eecfe;
    }
    eax = rd32(arg1 + 0x178u);
    if ((int32_t)eax >= 205) goto L_102eecf3;
    if ((int32_t)eax > 200) goto L_102eecc5;
    if ((int32_t)eax >= 197) goto L_102eecf3;
    if (eax == 1u) goto L_102eed55;
    if ((int32_t)eax <= 191) goto L_102eed2f;
    if ((int32_t)eax <= 193) goto L_102eecc2;
    if (eax == 0xc2u) goto L_102eecbf;
    if (eax == 0xc3u) goto L_102eecf3;
    if (eax != 0xc4u) goto L_102eed2f;
    g->ebx = arg1;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t5 = cow_fastcall(g, COW_IMG(0x102ee482u), 1u, edx, 0);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
L_102eedcb: ;
    if ((uint8_t)eax == 0u) goto L_102eee07;
L_102eedcf: ;
    wr32(arg1 + 0x178u, 0u);
    goto L_102eec2c;
L_102eecbf: ;
    ecx = 1u;
    loc_10 = 0u;
L_102eece9: ;
    g->esi = arg1;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x102ed9c8u), g->eax, ecx, edx, 1, 3, loc_10, in_edi, in_esi);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_102eedca: ;
    ecx = loc_10;
    goto L_102eedcb;
L_102eecc2: ;
    ecx = 1u;
    loc_10 = 0u;
L_102eece7: ;
    ecx = ecx & 0xffffff00u;
    goto L_102eece9;
L_102eecc5: ;
    if (eax == 0xc9u)
    {
        eax = eax - 0xc9u;
        goto L_102eece5;
    }
    eax = eax - 0xc9u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102eecdf;
    }
    eax = eax - 1u;
    if (eax == 1u) goto L_102eecf3;
    eax = eax - 1u;
    if (eax != 1u) goto L_102eed2f;
    eax = eax - 1u;
    g->esi = arg1;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t8 = cow_fastcall(g, COW_IMG(0x102ee32bu), ecx, edx, 0);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    goto L_102eedcb;
L_102eecdf: ;
    ecx = 1u;
    loc_10 = 1u;
    goto L_102eece9;
L_102eece5: ;
    loc_10 = 1u;
    goto L_102eece7;
L_102eecf3: ;
    wr32(rd32(arg1) + 0x14u, 0x3bu);
L_102eed38: ;
    t29 = rd32(arg1 + 0x178u);
    wr32(rd32(arg1) + 0x18u, t29);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(arg1)), t29, 0);
    t30 = g->edx;
    edx = t30;
    loc_10 = arg1;
L_102eed48: ;
    ecx = loc_10;
    goto L_102eedcf;
L_102eecfe: ;
    if ((int32_t)eax > 219) goto L_102eed7d;
    zf = eax == 0xdbu;
    if (zf) goto L_102eed74;
    if ((int32_t)eax < 208) goto L_102eed2f;
    if ((int32_t)eax <= 215) goto L_102eed55;
    if (eax == 0xd8u) goto L_102eed4e;
    if (eax == 0xd9u) goto L_102eedef;
    if (eax == 0xdau) goto L_102eeddb;
L_102eed2f: ;
    wr32(rd32(arg1) + 0x14u, 0x43u);
    goto L_102eed38;
L_102eed4e: ;
    g->esi = arg1;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t16 = cow_fastcall(g, COW_IMG(0x102ed93au), ecx, edx, 0);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    goto L_102eedcb;
L_102eed55: ;
    wr32(rd32(arg1) + 0x14u, 0x5bu);
    t19 = rd32(arg1 + 0x178u);
    wr32(rd32(arg1) + 0x18u, t19);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(arg1) + 4u), t19, 0);
    t20 = g->edx;
    edx = t20;
    loc_10 = 1u;
    goto L_102eed48;
L_102eed74: ;
    g->ebx = arg1;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t21 = cow_fastcall(g, COW_IMG(0x102ee716u), ecx, edx, 0);
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    goto L_102eedcb;
L_102eed7d: ;
    if (eax == 0xdcu) goto L_102eedc4;
    if (eax == 0xddu) goto L_102eedbc;
    if ((int32_t)eax <= 223) goto L_102eed2f;
    if ((int32_t)eax <= 239) goto L_102eedac;
    if (eax != 0xfeu) goto L_102eed2f;
    g->eax = rd32(arg1 + 0x190u);
    g->edx = edx;
    t24 = rd32(arg1 + 0x190u);
    g->esp = sp0 - 0x10u;
    t25 = cow_thiscall(g, rd32(t24 + 0xcu), ecx, 0);
    t26 = g->edx;
    eax = t25;
    edx = t26;
    loc_10 = arg1;
    goto L_102eedca;
L_102eedac: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t27 = cow_thiscall(g, rd32(eax * 4u + rd32(arg1 + 0x190u) - 0x370u), rd32(arg1 + 0x190u), 0);
    t28 = g->edx;
    eax = t27;
    edx = t28;
    loc_10 = arg1;
    goto L_102eedca;
L_102eedbc: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t31 = cow_call_regs(g, COW_IMG(0x102ee93fu), g->eax, ecx, edx, 1, 3, arg1, in_edi, in_esi);
    t32 = g->edx;
    eax = t31;
    edx = t32;
    loc_10 = arg1;
    goto L_102eedca;
L_102eedc4: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t33 = cow_call_regs(g, COW_IMG(0x102eea16u), g->eax, ecx, edx, 1, 3, arg1, in_edi, in_esi);
    t34 = g->edx;
    eax = t33;
    edx = t34;
    loc_10 = arg1;
    goto L_102eedca;
L_102eeddb: ;
    g->esi = arg1;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t13 = cow_fastcall(g, COW_IMG(0x102edcc3u), ecx, edx, 0);
    t14 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        edx = t14;
        goto L_102eee07;
    }
    edx = t14;
    eax = 1u;
L_102eede7: ;
    wr32(arg1 + 0x178u, 0u);
L_102eee09: ;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_102eedef: ;
    wr32(rd32(arg1) + 0x14u, 0x54u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, rd32(rd32(arg1) + 4u), ecx, 2, arg1, 1u);
    t15 = g->edx;
    eax = 2u;
    edx = t15;
    goto L_102eede7;
L_102eee07: ;
    eax = 0u;
    goto L_102eee09;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102eec20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102eec20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
