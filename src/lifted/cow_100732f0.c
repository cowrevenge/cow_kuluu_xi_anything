/* f_0x100732f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100732f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, arg3);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10074280u), 1, arg3);
    t1 = g->edx;
    if (rd32(COW_IMG(0x1047cf84u)) == 0u)
    {
        eax = rd32(COW_IMG(0x1047cf84u));
        edx = t1;
        goto L_10073331;
    }
    eax = rd32(COW_IMG(0x1047cf84u));
    if (rd32(rd32(eax) + 0x14u) == 0u)
    {
        edx = rd32(rd32(eax) + 0x14u);
        eax = rd32(eax);
        goto L_10073331;
    }
    edx = rd32(rd32(eax) + 0x14u);
L_10073318: ;
    g->edx = edx;
    t2 = rd32(edx);
    g->esp = sp0 - 0x18u;
    t3 = cow_thiscall(g, COW_IMG(0x10072270u), t2, 0);
    t4 = g->edx;
    if (t3 != t2)
    {
        eax = t3;
        esi = t2;
        goto L_1007332a;
    }
    eax = t3;
    edx = t4;
    esi = t2;
    if (rd32(esi + 0x34u) == arg3) goto L_10073383;
L_1007332a: ;
    if (rd32(esi + 0x10u) != 0u)
    {
        edx = rd32(esi + 0x10u);
        goto L_10073318;
    }
    edx = rd32(esi + 0x10u);
L_10073331: ;
    wr32(sp0 - 0x1cu, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x20u, arg2);
    g->eax = eax;
    g->ecx = arg2;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, arg2, COW_IMG(0x1034f2d0u), in_edi, in_esi, in_ebp);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u) goto L_1007340f;
    ecx = t6;
    edx = t7;
    esi = t5;
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, esi);
    g->ecx = ecx;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, esi, 0u, 2u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x28u, esi);
    g->ecx = t8;
    g->esp = sp0 - 0x1cu;
    t10 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t9, 1, 3, esi, rd32(sp0 - 0x24u), 0u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, esi);
    g->ecx = t11;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, t12, 1, 3, esi, 0u, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x38u, t10);
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0x2cu;
    t15 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t10, rd32(sp0 - 0x34u), 0u);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x1cu, esi);
    if (t15 != 0u)
    {
        ecx = t16;
        edx = t17;
        ebx = t10;
        edi = t15;
        loc_1c = esi;
        goto L_1007339c;
    }
    ecx = t16;
    edx = t17;
    edi = t15;
    loc_1c = esi;
    g->edi = edi;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, loc_1c, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
L_1007340c: ;
L_1007340f: ;
    t31 = rd32(sp0 - 0x10u);
    t32 = rd32(sp0 - 0x14u);
    t33 = rd32(sp0 - 0x18u);
    wr32(arg1, 0u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = t32;
    g->edi = t33;
    g->ebp = t31;
    return;
L_10073383: ;
    wr8(rd32(edx) + 0x19u, rd8(rd32(edx) + 0x19u) | 0x80u);
    wr32(arg1, edx);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return;
L_1007339c: ;
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, ebx);
    wr32(sp0 - 0x28u, edi);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, edi, ebx, 1u, loc_1c, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x2cu, esi);
    g->edi = edi;
    g->esp = sp0 - 0x20u;
    t20 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t19, 1, 3, esi, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t21 = g->edx;
    wr32(sp0 - 0x20u, 0u);
    g->esp = sp0 - 0x1cu;
    t22 = cow_thiscall(g, COW_IMG(0x1005e110u), sp0 - 0x1cu, 1, 0u);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x18u;
    t23 = cow_thiscall(g, COW_IMG(0x10073430u), self, 3, sp0 - 8u, edi, rd32(sp0 - 0x1cu));
    t24 = g->edx;
    wr32(sp0 - 0x1cu, rd32(t23));
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->eax = rd32(t23);
    g->edx = t24;
    t25 = rd32(t23);
    t26 = cow_thiscall(g, COW_IMG(0x10052870u), sp0 + 8u, 2, sp0 - 4u, t25);
    t27 = g->ecx;
    t28 = g->edx;
    if (rd32(t26) == 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        goto L_10073406;
    }
    edx = t28;
    wr32(sp0 - 0x1cu, arg2);
    g->ecx = self;
    g->esp = sp0 - 0x18u;
    t29 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, arg2);
    t30 = g->ecx;
    wr32(sp0 - 0x1cu, edi);
    wr32(t29 + 0x34u, arg3);
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
    wr32(arg1, arg2);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return;
L_10073406: ;
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
    goto L_1007340c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100732f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100732f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
