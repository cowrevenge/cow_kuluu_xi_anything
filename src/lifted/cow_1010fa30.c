/* f_0x1010fa30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_1010fa30(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1010fa46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fa46;
    case 0x1010fa53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fa53;
    case 0x1010fa62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fa62;
    case 0x1010fa6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fa6e;
    case 0x1010fa7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fa7b;
    case 0x1010fa7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fa7d;
    case 0x1010fa86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fa86;
    case 0x1010fa90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fa90;
    case 0x1010fa99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fa99;
    case 0x1010fa9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fa9b;
    case 0x1010faa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010faa4;
    case 0x1010faafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010faaf;
    case 0x1010fab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fab8;
    case 0x1010fabau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010faba;
    case 0x1010fac3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fac3;
    case 0x1010facbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010facb;
    case 0x1010fad4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fad4;
    case 0x1010fad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fad6;
    case 0x1010fadfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fadf;
    case 0x1010fb08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fb08;
    case 0x1010fb17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fb17;
    case 0x1010fb1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); self = rd32(sp0 - 0x1cu); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x24u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_1010fb1d;
    case 0x1010fb31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_1010fb31;
    case 0x1010fb39u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_1010fb39;
    case 0x1010fb4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; loc_10 = rd32(sp0 - 0x10u); goto E_1010fb4e;
    case 0x1010fb89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_1010fb89;
    case 0x1010fb93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010fb93;
    case 0x1010fb95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010fb95;
    case 0x1010fbbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1010fbba;
    default: break;
    }
#endif

    COW_AT(1010fa30)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x1cu, self);
    t1 = rd32(self + 0x10u);
    wr32(sp0 - 0x10u, t1);
    ecx = self;
    edx = in_edx;
    ebx = t1;
    ebp = rd32(sp0 + 8u);
    loc_10 = t1;
L_1010fa46: ;
    COW_AT(1010fa46)
    if (rd32(ebx + 4u) == 0u)
    {
        eax = rd32(ebx + 4u);
        goto L_1010fb1d;
    }
    COW_AT(1010fa53)
    t2 = rd32(ebx + 8u);
    t3 = rd32(ebx + 8u);
    wr32(sp0 + 8u, t2);
    if (t3 == 0u)
    {
        eax = t2;
        goto L_1010fb1d;
    }
    COW_AT(1010fa62)
    eax = arg1;
    esi = 0u;
    edi = rd32(ebx) - arg1;
    ebx = rd32(ebx);
L_1010fa6e: ;
    COW_AT(1010fa6e)
    if (rd32(eax + edi) > rd32(eax))
    {
        ecx = rd32(eax + edi);
        edx = rd32(eax);
        goto L_1010fb17;
    }
    cf = rd32(eax + edi) < rd32(eax);
    COW_AT(1010fa7b)
    if (cf) goto L_1010fa86;
    COW_AT(1010fa7d)
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010fa6e;
    }
L_1010fa86: ;
    COW_AT(1010fa86)
    eax = arg1;
    esi = 0u;
    edi = ebx - arg1;
L_1010fa90: ;
    COW_AT(1010fa90)
    if (rd32(eax + edi) > rd32(eax)) goto L_1010faa4;
    ecx = rd32(eax + edi);
    edx = rd32(eax);
    cf = rd32(eax + edi) < rd32(eax);
    COW_AT(1010fa99)
    if (cf) goto L_1010fb08;
    COW_AT(1010fa9b)
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010fa90;
    }
L_1010faa4: ;
    COW_AT(1010faa4)
    eax = ebp;
    esi = 0u;
    edi = ebx + 0xcu - ebp;
    ebx = ebx + 0xcu;
L_1010faaf: ;
    COW_AT(1010faaf)
    if (rd32(eax + edi) > rd32(eax))
    {
        ecx = rd32(eax + edi);
        edx = rd32(eax);
        goto L_1010fb17;
    }
    cf = rd32(eax + edi) < rd32(eax);
    COW_AT(1010fab8)
    if (cf) goto L_1010fac3;
    COW_AT(1010faba)
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010faaf;
    }
L_1010fac3: ;
    COW_AT(1010fac3)
    eax = ebp;
    esi = 0u;
    edi = ebx - ebp;
L_1010facb: ;
    COW_AT(1010facb)
    if (rd32(eax + edi) > rd32(eax)) goto L_1010fadf;
    ecx = rd32(eax + edi);
    edx = rd32(eax);
    cf = rd32(eax + edi) < rd32(eax);
    COW_AT(1010fad4)
    if (cf) goto L_1010fb08;
    COW_AT(1010fad6)
    if ((int32_t)(esi + 1u) < 3)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_1010facb;
    }
L_1010fadf: ;
    COW_AT(1010fadf)
    wr32(rd32(loc_10) + 0x18u, arg5);
    wr32(rd32(loc_10) + 0x1cu, arg3);
    wr32(rd32(loc_10) + 0x20u, arg4);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_1010fb08: ;
    COW_AT(1010fb08)
    t4 = rd32(sp0 + 8u);
    wr32(sp0 - 0x10u, t4);
    ebx = t4;
    loc_10 = t4;
    goto L_1010fa46;
L_1010fb17: ;
    COW_AT(1010fb17)
    ebx = loc_10;
L_1010fb1d: ;
    COW_AT(1010fb1d)
    wr32(sp0 - 0x30u, 0x24u);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x24u, in_edi, in_esi);
    if (t5 != 0u)
    {
        esi = t5;
    COW_AT(1010fb31)
        if (sp0 - 0x18u == ebp)
        {
            edx = sp0 - 0x18u;
        }
        else
        {
    COW_AT(1010fb39)
            wr32(sp0 - 0x18u, rd32(ebp));
            t6 = rd32(ebp + 4u);
            wr32(sp0 - 0x14u, t6);
            t7 = rd32(ebp + 8u);
            wr32(sp0 - 0x10u, t7);
            edx = t7;
        }
    COW_AT(1010fb4e)
        wr32(sp0 - 0x30u, arg1);
        g->eax = arg1;
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t8 = cow_thiscall(g, COW_IMG(0x1010fee0u), sp0 - 0xcu, 1, arg1);
        t9 = g->edx;
        wr32(sp0 - 0x30u, sp0 - 0xcu);
        t10 = cow_thiscall(g, COW_IMG(0x1010e040u), esi, 1, sp0 - 0xcu);
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        g->edx = sp0 - 0x18u;
        t11 = cow_thiscall(g, COW_IMG(0x1010e040u), esi + 0xcu, 1, sp0 - 0x18u);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x30u, 0xcu);
        wr32(esi + 0x1cu, 0u);
        wr32(esi + 0x20u, 0u);
        t14 = cow_call_regs(g, COW_IMG(0x101085e0u), g->eax, g->ecx, t13, 1, 1, 0xcu);
        t15 = g->edx;
        if (t14 == 0u)
        {
            edx = t15;
    COW_AT(1010fb93)
            eax = 0u;
        }
        else
        {
            eax = t14;
            edx = t15;
    COW_AT(1010fb89)
            wr32(eax, esi);
            wr32(eax + 8u, 0u);
            wr32(eax + 4u, 0u);
        }
    COW_AT(1010fb95)
        wr32(sp0 - 0x30u, ebx);
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, COW_IMG(0x10110040u), eax, 1, ebx);
        wr16(rd32(sp0 - 0x1cu) + 6u, (uint16_t)(rd16(rd32(sp0 - 0x1cu) + 6u) + 1u));
        wr32(esi + 0x18u, arg5);
        wr32(esi + 0x1cu, arg3);
        wr32(esi + 0x20u, arg4);
    }
    COW_AT(1010fbba)
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1010fa30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1010fa46u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fa53u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1010fa62u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fa6eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fa7bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fa7du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fa86u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fa90u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fa99u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fa9bu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010faa4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010faafu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fab8u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fabau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fac3u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010facbu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fad4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fad6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fadfu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fb08u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fb17u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fb1du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        self = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1010fb31u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x2cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1010fb39u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x2cu;
        g->edx = sp0 - 0x18u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1010fb4eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x2cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1010fb89u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x2cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1010fb93u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fb95u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1010fbbau:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1010fa30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1010fa30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
