/* f_0x102c7d5e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=10 */
void cow_fn_102c7d5e(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_54;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg9 = rd32(sp0 + 0x24u);
    const uint32_t arg10 = rd32(sp0 + 0x28u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c7d72u: in_edx = g->edx; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7d72;
    case 0x102c7d7du: in_edx = g->edx; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7d7d;
    case 0x102c7d86u: in_edx = g->edx; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7d86;
    case 0x102c7d8fu: in_edx = g->edx; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7d8f;
    case 0x102c7d98u: in_edx = g->edx; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7d98;
    case 0x102c7da1u: in_edx = g->edx; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7da1;
    case 0x102c7dacu: in_edx = g->edx; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7dac;
    case 0x102c7db7u: in_edx = g->edx; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7db7;
    case 0x102c7dc2u: edx = g->edx; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7dc2;
    case 0x102c7dcdu: in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7dcd;
    case 0x102c7de9u: eax = g->eax; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7de9;
    case 0x102c7dfcu: eax = g->eax; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7dfc;
    case 0x102c7e0fu: eax = g->eax; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7e0f;
    case 0x102c7e22u: eax = g->eax; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7e22;
    case 0x102c7e35u: eax = g->eax; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7e35;
    case 0x102c7e48u: eax = g->eax; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7e48;
    case 0x102c7e5bu: eax = g->eax; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7e5b;
    case 0x102c7e6eu: eax = g->eax; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7e6e;
    case 0x102c7f10u: eax = g->eax; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7f10;
    case 0x102c7f12u: eax = g->eax; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7f12;
    case 0x102c7f19u: edx = g->edx; in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7f19;
    case 0x102c7f1eu: eax = g->eax; edx = g->edx; loc_54 = rd32(sp0 - 0x54u); in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7f1e;
    case 0x102c7f26u: eax = g->eax; edx = g->edx; loc_54 = rd32(sp0 - 0x54u); in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7f26;
    case 0x102c7f28u: eax = g->eax; edx = g->edx; loc_54 = rd32(sp0 - 0x54u); in_edi = rd32(sp0 - 0x50u); in_esi = rd32(sp0 - 0x4cu); in_ebx = rd32(sp0 - 0x48u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x50u); g->esi = rd32(sp0 - 0x4cu); goto E_102c7f28;
    default: break;
    }
#endif

    COW_AT(102c7d5e)
    if (arg1 != 0u)
    {
    COW_AT(102c7d72)
        if (arg2 != 0u)
        {
    COW_AT(102c7d7d)
            if ((int32_t)arg3 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
    COW_AT(102c7d86)
            if ((int32_t)arg4 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
    COW_AT(102c7d8f)
            if ((int32_t)arg5 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
    COW_AT(102c7d98)
            if ((int32_t)arg6 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
    COW_AT(102c7da1)
            if ((int32_t)arg7 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
    COW_AT(102c7dac)
            if ((int32_t)arg8 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
    COW_AT(102c7db7)
            if ((int32_t)arg9 < 0)
            {
                edx = in_edx;
                goto L_102c7f19;
            }
    COW_AT(102c7dc2)
            if ((int32_t)arg10 < 0)
            {
                edx = arg10;
                goto L_102c7f19;
            }
    COW_AT(102c7dcd)
            if ((cow_fsw(g, (double)(int32_t)arg3, rdf64(COW_IMG(0x103433e0u)), 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (uint16_t)cow_fsw(g, (double)(int32_t)arg3, rdf64(COW_IMG(0x103433e0u)), 1u);
                x0 = rdf64(COW_IMG(0x103433e0u));
                goto L_102c7f10;
            }
            eax = (uint16_t)cow_fsw(g, (double)(int32_t)arg3, rdf64(COW_IMG(0x103433e0u)), 1u);
            x0 = rdf64(COW_IMG(0x103433e0u));
    COW_AT(102c7de9)
            if ((cow_fsw(g, (double)(int32_t)arg4, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg4, x0, 1u);
                goto L_102c7f10;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg4, x0, 1u);
    COW_AT(102c7dfc)
            if ((cow_fsw(g, (double)(int32_t)arg5, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg5, x0, 1u);
                goto L_102c7f10;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg5, x0, 1u);
    COW_AT(102c7e0f)
            if ((cow_fsw(g, (double)(int32_t)arg6, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg6, x0, 1u);
                goto L_102c7f10;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg6, x0, 1u);
    COW_AT(102c7e22)
            if ((cow_fsw(g, (double)(int32_t)arg7, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg7, x0, 1u);
                goto L_102c7f10;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg7, x0, 1u);
    COW_AT(102c7e35)
            if ((cow_fsw(g, (double)(int32_t)arg8, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg8, x0, 1u);
                goto L_102c7f10;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg8, x0, 1u);
    COW_AT(102c7e48)
            if ((cow_fsw(g, (double)(int32_t)arg9, x0, 1u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg9, x0, 1u);
                goto L_102c7f10;
            }
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg9, x0, 1u);
    COW_AT(102c7e5b)
            if ((cow_fsw(g, (double)(int32_t)arg10, x0, 0u) >> 8u & 0x41u) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)(int32_t)arg10, x0, 0u);
                goto L_102c7f12;
            }
    COW_AT(102c7e6e)
            d1 = fr(g, (double)(int32_t)arg3 * rdf64(COW_IMG(0x10340b28u)));
            d2 = rdf64(COW_IMG(0x10340b28u));
            wrf32(arg2 + 0x80u, (float)d1);
            wrf32(arg2 + 0x84u, (float)fr(g, (double)(int32_t)arg4 * d2));
            wrf32(arg2 + 0x88u, (float)fr(g, (double)(int32_t)arg5 * d2));
            wrf32(arg2 + 0x8cu, (float)fr(g, (double)(int32_t)arg6 * d2));
            wr32(arg2 + 8u, rd32(arg2 + 8u) | 4u);
            wrf32(arg2 + 0x90u, (float)fr(g, (double)(int32_t)arg7 * d2));
            wrf32(arg2 + 0x94u, (float)fr(g, (double)(int32_t)arg8 * d2));
            wr32(arg2 + 0x100u, arg3);
            wrf32(arg2 + 0x98u, (float)fr(g, (double)(int32_t)arg9 * d2));
            wr32(arg2 + 0x104u, arg4);
            wrf32(arg2 + 0x9cu, (float)fr(g, (double)(int32_t)arg10 * d2));
            wr32(arg2 + 0x108u, arg5);
            wr32(arg2 + 0x10cu, arg6);
            wr32(arg2 + 0x110u, arg7);
            wr32(arg2 + 0x114u, arg8);
            wr32(arg2 + 0x118u, arg9);
            wr32(arg2 + 0x11cu, arg10);
        }
    }
L_102c7f28: ;
    COW_AT(102c7f28)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_102c7f10: ;
    COW_AT(102c7f10)
L_102c7f12: ;
    COW_AT(102c7f12)
    edx = arg10;
    loc_54 = COW_IMG(0x103c9640u);
L_102c7f1e: ;
    COW_AT(102c7f1e)
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_54);
    COW_AT(102c7f26)
    goto L_102c7f28;
L_102c7f19: ;
    COW_AT(102c7f19)
    eax = 0u;
    loc_54 = COW_IMG(0x103c960cu);
    goto L_102c7f1e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c7d5e(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c7d72u:
    {
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c7d7du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c7d86u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c7d8fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c7d98u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c7da1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c7dacu:
    {
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        g->ecx = arg2;
        g->ebx = arg7;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c7db7u:
    {
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        g->ecx = arg2;
        g->ebx = arg7;
        g->ebp = sp0 - 4u;
        g->edi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102c7dc2u:
    {
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        g->ecx = arg2;
        g->ebx = arg7;
        g->ebp = sp0 - 4u;
        g->esi = arg9;
        g->edi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102c7dcdu:
    {
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg10 = rd32(sp0 + 0x28u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        g->ecx = arg2;
        g->edx = arg10;
        g->ebx = arg7;
        g->ebp = sp0 - 4u;
        g->esi = arg9;
        g->edi = arg8;
        (void)sp0;
        return 1;
    }
    case 0x102c7de9u:
    {
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg10 = rd32(sp0 + 0x28u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x50u;
        g->ecx = arg2;
        g->edx = arg10;
        g->ebx = arg7;
        g->ebp = sp0 - 4u;
        g->esi = arg9;
        g->edi = arg8;
        wrf64(sp0 - 0xcu, (double)(int32_t)arg3);
        (void)sp0;
        return 1;
    }
    case 0x102c7dfcu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg10 = rd32(sp0 + 0x28u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x50u;
        g->ecx = arg2;
        g->edx = arg10;
        g->ebx = arg7;
        g->ebp = sp0 - 4u;
        g->esi = arg9;
        g->edi = arg8;
        wrf64(sp0 - 0x14u, (double)(int32_t)arg4);
        wrf64(sp0 - 0xcu, (double)(int32_t)arg3);
        (void)sp0;
        return 1;
    }
    case 0x102c7e0fu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg10 = rd32(sp0 + 0x28u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x50u;
        g->ecx = arg2;
        g->edx = arg10;
        g->ebx = arg7;
        g->ebp = sp0 - 4u;
        g->esi = arg9;
        g->edi = arg8;
        wrf64(sp0 - 0x1cu, (double)(int32_t)arg5);
        wrf64(sp0 - 0x14u, (double)(int32_t)arg4);
        wrf64(sp0 - 0xcu, (double)(int32_t)arg3);
        (void)sp0;
        return 1;
    }
    case 0x102c7e22u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg10 = rd32(sp0 + 0x28u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x50u;
        g->ecx = arg2;
        g->edx = arg10;
        g->ebx = arg7;
        g->ebp = sp0 - 4u;
        g->esi = arg9;
        g->edi = arg8;
        wrf64(sp0 - 0x24u, (double)(int32_t)arg6);
        wrf64(sp0 - 0x1cu, (double)(int32_t)arg5);
        wrf64(sp0 - 0x14u, (double)(int32_t)arg4);
        wrf64(sp0 - 0xcu, (double)(int32_t)arg3);
        (void)sp0;
        return 1;
    }
    case 0x102c7e35u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg10 = rd32(sp0 + 0x28u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x50u;
        g->ecx = arg2;
        g->edx = arg10;
        g->ebx = arg7;
        g->ebp = sp0 - 4u;
        g->esi = arg9;
        g->edi = arg8;
        wrf64(sp0 - 0x2cu, (double)(int32_t)arg7);
        wrf64(sp0 - 0x24u, (double)(int32_t)arg6);
        wrf64(sp0 - 0x1cu, (double)(int32_t)arg5);
        wrf64(sp0 - 0x14u, (double)(int32_t)arg4);
        wrf64(sp0 - 0xcu, (double)(int32_t)arg3);
        (void)sp0;
        return 1;
    }
    case 0x102c7e48u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg10 = rd32(sp0 + 0x28u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x50u;
        g->ecx = arg2;
        g->edx = arg10;
        g->ebx = arg7;
        g->ebp = sp0 - 4u;
        g->esi = arg9;
        g->edi = arg8;
        wrf64(sp0 - 0x34u, (double)(int32_t)arg8);
        wrf64(sp0 - 0x2cu, (double)(int32_t)arg7);
        wrf64(sp0 - 0x24u, (double)(int32_t)arg6);
        wrf64(sp0 - 0x1cu, (double)(int32_t)arg5);
        wrf64(sp0 - 0x14u, (double)(int32_t)arg4);
        wrf64(sp0 - 0xcu, (double)(int32_t)arg3);
        (void)sp0;
        return 1;
    }
    case 0x102c7e5bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg10 = rd32(sp0 + 0x28u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x50u;
        g->ecx = arg2;
        g->edx = arg10;
        g->ebx = arg7;
        g->ebp = sp0 - 4u;
        g->esi = arg9;
        g->edi = arg8;
        wrf64(sp0 - 0x3cu, (double)(int32_t)arg9);
        wrf64(sp0 - 0x34u, (double)(int32_t)arg8);
        wrf64(sp0 - 0x2cu, (double)(int32_t)arg7);
        wrf64(sp0 - 0x24u, (double)(int32_t)arg6);
        wrf64(sp0 - 0x1cu, (double)(int32_t)arg5);
        wrf64(sp0 - 0x14u, (double)(int32_t)arg4);
        wrf64(sp0 - 0xcu, (double)(int32_t)arg3);
        (void)sp0;
        return 1;
    }
    case 0x102c7e6eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg7 = rd32(sp0 + 0x1cu);
        const uint32_t arg8 = rd32(sp0 + 0x20u);
        const uint32_t arg9 = rd32(sp0 + 0x24u);
        const uint32_t arg10 = rd32(sp0 + 0x28u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->ecx = arg2;
        g->edx = arg10;
        g->ebx = arg7;
        g->ebp = sp0 - 4u;
        g->esi = arg9;
        g->edi = arg8;
        wrf64(sp0 - 0x44u, (double)(int32_t)arg10);
        wrf64(sp0 - 0x3cu, (double)(int32_t)arg9);
        wrf64(sp0 - 0x34u, (double)(int32_t)arg8);
        wrf64(sp0 - 0x2cu, (double)(int32_t)arg7);
        wrf64(sp0 - 0x24u, (double)(int32_t)arg6);
        wrf64(sp0 - 0x1cu, (double)(int32_t)arg5);
        wrf64(sp0 - 0x14u, (double)(int32_t)arg4);
        wrf64(sp0 - 0xcu, (double)(int32_t)arg3);
        (void)sp0;
        return 1;
    }
    case 0x102c7f10u:
    {
        const uint32_t arg10 = rd32(sp0 + 0x28u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x50u;
        g->ecx = arg2;
        g->edx = arg10;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c7f12u:
    {
        const uint32_t arg10 = rd32(sp0 + 0x28u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->ecx = arg2;
        g->edx = arg10;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c7f19u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->eax = 0u;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c7f1eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_54;
        eax = g->eax;
        edx = g->edx;
        loc_54 = rd32(sp0 - 0x54u);
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x54u;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c7f26u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_54;
        eax = g->eax;
        edx = g->edx;
        loc_54 = rd32(sp0 - 0x54u);
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x58u, arg1);
        (void)sp0;
        return 1;
    }
    case 0x102c7f28u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_54;
        eax = g->eax;
        edx = g->edx;
        loc_54 = rd32(sp0 - 0x54u);
        in_edi = rd32(sp0 - 0x50u);
        in_esi = rd32(sp0 - 0x4cu);
        in_ebx = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x50u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c7d5e(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c7d5e(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
