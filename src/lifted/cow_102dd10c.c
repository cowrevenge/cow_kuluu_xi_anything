/* f_0x102dd10c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102dd10c(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_e8;
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
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
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
    cow_frame(g, sp0, 248u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1032817bu));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102dd116u));
    wr32(sp0 - 0xdcu, in_ebx);
    wr32(sp0 - 0xe0u, in_esi);
    wr32(sp0 - 0xe4u, in_edi);
    wr32(sp0 - 0x24u, self);
    g->eax = COW_IMG(0x102dd116u);
    g->edx = in_edx;
    g->esp = sp0 - 0xe4u;
    t2 = cow_thiscall(g, COW_IMG(0x102e70c5u), sp0 - 0x40u, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 8u, 0u);
    if (arg2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_102dd161;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    if (arg2 == 0u || (int32_t)arg2 < 0) goto L_102dd34c;
    if ((int32_t)arg2 <= 3) goto L_102dd345;
    if (arg2 == 4u) goto L_102dd33b;
    if (arg2 == 5u) goto L_102dd345;
    if (arg2 != 6u) goto L_102dd34c;
L_102dd161: ;
    ebx = COW_IMG(0x103cc5e0u);
L_102dd166: ;
    wr32(sp0 - 0xe8u, rd32(self));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    t5 = cow_cdecl(g, COW_IMG(0x102d2626u), 1, rd32(self));
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0xecu, t5);
    t8 = rd32(self + 8u);
    wr32(sp0 - 0xf0u, t8);
    wr32(sp0 - 0xf4u, ebx);
    g->ebx = ebx;
    g->edx = t7;
    g->esp = sp0 - 0xe8u;
    t9 = cow_cdecl(g, COW_IMG(0x102d26bfu), 3, ebx, t8, t5);
    t10 = g->edx;
    wr32(sp0 - 0x20u, t9);
    if (t9 == 0u)
    {
        eax = t9;
        edx = t10;
        goto L_102dd345;
    }
    eax = t9;
    edx = t10;
    ebx = t9;
    loc_20 = t9;
    if (ebx == rd32(self))
    {
        esi = self;
        goto L_102dd325;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    t11 = cow_thiscall(g, COW_IMG(0x102dd5dau), sp0 - 0x30u, 0);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0xe8u, ebx);
    wr8(sp0 - 8u, 1u);
    g->edx = t13;
    t14 = cow_cdecl(g, COW_IMG(0x102d2626u), 1, ebx);
    t15 = g->edx;
    t16 = rd32(t14 + 8u) >> 3u;
    wr32(sp0 - 0x14u, t16);
    wr32(sp0 - 0x18u, self);
    eax = t16;
    edx = t15;
    esi = self;
    loc_14 = t16;
    loc_18 = self;
L_102dd1ae: ;
    if (loc_18 == 0u) goto L_102dd309;
    ebx = loc_18;
L_102dd1b9: ;
    t17 = rd32(ebx + 0x14u) * rd32(ebx + 0xcu) * eax * rd32(ebx + 0x10u);
    wr32(sp0 - 0xe8u, t17);
    g->eax = eax;
    g->esp = sp0 - 0xdcu;
    t18 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t17, edx, 1, 3, t17, rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u));
    t19 = g->edx;
    wr32(sp0 - 0x1cu, t18);
    if (t18 == 0u)
    {
        eax = t18;
        edx = t19;
        goto L_102dd353;
    }
    loc_1c = t18;
    t20 = rd32(ebx + 4u);
    wr32(sp0 - 0xd8u, t20);
    wr32(sp0 - 0xd4u, rd32(ebx));
    t21 = rd32(ebx + 0x30u);
    wr32(sp0 - 0xd0u, t21);
    t22 = rd32(ebx + 0x34u);
    wr32(sp0 - 0xccu, t22);
    wr32(sp0 - 0xe8u, 6u);
    wr32(sp0 - 0xe8u, 6u);
    esi = ebx + 0x18u;
    edi = sp0 - 0xc8u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = ebx + 0x18u;
    edi = sp0 - 0xb0u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x98u, 1u);
    t23 = rd32(ebx + 8u);
    wr32(sp0 - 0x90u, t23);
    wr32(sp0 - 0x8cu, loc_1c);
    t24 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x88u, t24);
    t25 = rd32(ebx + 0xcu) * rd32(sp0 - 0x14u);
    wr32(sp0 - 0x84u, t25);
    t26 = rd32(ebx + 0xcu) * rd32(sp0 - 0x14u) * rd32(ebx + 0x10u);
    wr32(sp0 - 0x80u, t26);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x78u, 0u);
    t27 = rd32(ebx + 0xcu);
    wr32(sp0 - 0x74u, t27);
    t28 = rd32(ebx + 0x10u);
    wr32(sp0 - 0x70u, t28);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0xe8u, 6u);
    t29 = rd32(ebx + 0x14u);
    wr32(sp0 - 0x68u, t29);
    esi = sp0 - 0x7cu;
    edi = sp0 - 0x64u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x4cu, 1u);
    t30 = rd32(ebx + 8u);
    wr32(sp0 - 0x44u, t30);
    wr32(sp0 - 0xe8u, 0x80001u);
    wr32(sp0 - 0xecu, sp0 - 0xd8u);
    wr32(sp0 - 0xf0u, sp0 - 0x8cu);
    g->ebp = sp0 - 4u;
    g->eax = sp0 - 0x8cu;
    g->edx = 1u;
    g->esp = sp0 - 0xe4u;
    t31 = cow_thiscall(g, COW_IMG(0x102e0e72u), sp0 - 0x30u, 3, sp0 - 0x8cu, sp0 - 0xd8u, 0x80001u);
    t32 = g->ecx;
    t33 = g->edx;
    if ((int32_t)t31 < 0)
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        esi = t31;
        goto L_102dd366;
    }
    ecx = t32;
    edx = t33;
    if (rd32(ebx + 4u) != 0u)
    {
        eax = rd32(ebx + 4u);
        if (rd32(ebx + 0x38u) != 0u)
        {
            wr32(sp0 - 0xe8u, eax);
            g->edx = edx;
            g->esp = sp0 - 0xe4u;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
            t34 = g->edx;
            wr32(ebx + 4u, 0u);
            edx = t34;
        }
    }
    t35 = rd32(sp0 - 0x20u);
    wr32(ebx, t35);
    t36 = rd32(sp0 - 0x1cu);
    wr32(ebx + 4u, t36);
    wr32(sp0 - 0xe8u, 6u);
    esi = sp0 - 0x64u;
    edi = ebx + 0x18u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t37 = rd32(sp0 - 0x84u);
    wr32(ebx + 0x30u, t37);
    t38 = rd32(sp0 - 0x80u);
    wr32(ebx + 0x34u, t38);
    t39 = rd32(sp0 - 0x14u);
    wr32(ebx + 0x38u, 1u);
    if (rd32(ebx + 0x4cu) != 0u)
    {
        eax = t39;
        ebx = rd32(ebx + 0x4cu);
        goto L_102dd1b9;
    }
    eax = t39;
    esi = rd32(sp0 - 0x24u);
L_102dd309: ;
    t47 = rd32(loc_18 + 0x50u);
    wr32(sp0 - 0x18u, t47);
    if (rd32(loc_18 + 0x50u) != 0u)
    {
        loc_18 = t47;
        goto L_102dd1ae;
    }
    ecx = t47;
    wr8(sp0 - 8u, rd8(sp0 - 8u) & (uint8_t)ecx);
    g->eax = eax;
    g->esp = sp0 - 0xe4u;
    t48 = cow_fastcall(g, COW_IMG(0x102dd5e4u), sp0 - 0x30u, edx, 0);
    t49 = g->edx;
    eax = t48;
    edx = t49;
L_102dd325: ;
    wr32(sp0 - 0xe8u, arg3);
    wr32(sp0 - 0xecu, arg1);
    g->eax = eax;
    g->esp = sp0 - 0xe4u;
    t50 = cow_fastcall(g, COW_IMG(0x102e71e7u), sp0 - 0x40u, edx, 2, arg1, arg3);
    t51 = g->edx;
    if ((int32_t)t50 >= 0)
    {
        edx = t51;
        goto L_102dd37d;
    }
    eax = t50;
    edx = t51;
L_102dd337: ;
    esi = eax;
L_102dd3b6: ;
    wr32(sp0 - 8u, 0xffffffffu);
    g->esp = sp0 - 0xe4u;
    cow_fastcall(g, COW_IMG(0x102e72f2u), sp0 - 0x40u, edx, 0);
    t58 = rd32(sp0 - 0x10u);
    wr32(g->fs_base, t58);
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return esi;
L_102dd33b: ;
    ebx = COW_IMG(0x103cc5f8u);
    goto L_102dd166;
L_102dd345: ;
    esi = 0x88760b59u;
    goto L_102dd3b6;
L_102dd34c: ;
    esi = 0x8876086cu;
    goto L_102dd3b6;
L_102dd353: ;
    wr8(sp0 - 8u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0xe4u;
    t45 = cow_fastcall(g, COW_IMG(0x102dd5e4u), sp0 - 0x30u, edx, 0);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    esi = 0x8007000eu;
    goto L_102dd3b6;
L_102dd366: ;
    t40 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0xe8u, t40);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    t41 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t40);
    t42 = g->edx;
    wr8(sp0 - 8u, 0u);
    t43 = cow_fastcall(g, COW_IMG(0x102dd5e4u), sp0 - 0x30u, t42, 0);
    t44 = g->edx;
    eax = t43;
    edx = t44;
    goto L_102dd3b6;
L_102dd37d: ;
    if (arg2 == 0u) goto L_102dd3a4;
    if (arg2 == 4u) goto L_102dd398;
    if (arg2 == 6u) goto L_102dd394;
    eax = 0x80004001u;
    goto L_102dd337;
L_102dd394: ;
    wr32(sp0 - 0xe8u, 0u);
    eax = arg2 - 6u;
    loc_e8 = 0u;
L_102dd3a6: ;
    t55 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0xecu, t55);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    t56 = cow_thiscall(g, COW_IMG(0x102db85au), esi, 2, t55, loc_e8);
    t57 = g->edx;
    eax = t56;
    edx = t57;
L_102dd3b0: ;
    if ((int32_t)eax < 0) goto L_102dd337;
    esi = 0u;
    goto L_102dd3b6;
L_102dd398: ;
    t52 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0xe8u, t52);
    g->eax = arg2 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    t53 = cow_thiscall(g, COW_IMG(0x102dce64u), esi, 1, t52);
    t54 = g->edx;
    eax = t53;
    edx = t54;
    goto L_102dd3b0;
L_102dd3a4: ;
    wr32(sp0 - 0xe8u, 1u);
    eax = arg2;
    loc_e8 = 1u;
    goto L_102dd3a6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dd10c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dd10c(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
