/* f_0x1022c070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1022c070(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 2084u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022c097u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x814u); in_esi = rd32(sp0 - 0x810u); in_ebp = rd32(sp0 - 0x80cu); in_ebx = rd32(sp0 - 0x808u); g->ebp = rd32(sp0 - 0x80cu); g->ebx = rd32(sp0 - 0x808u); g->edi = rd32(sp0 - 0x814u); g->esi = rd32(sp0 - 0x810u); goto E_1022c097;
    case 0x1022c0a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x814u); in_esi = rd32(sp0 - 0x810u); in_ebp = rd32(sp0 - 0x80cu); in_ebx = rd32(sp0 - 0x808u); g->ebp = rd32(sp0 - 0x80cu); g->ebx = rd32(sp0 - 0x808u); g->edi = rd32(sp0 - 0x814u); g->esi = rd32(sp0 - 0x810u); goto E_1022c0a1;
    case 0x1022c0b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x814u); in_esi = rd32(sp0 - 0x810u); in_ebp = rd32(sp0 - 0x80cu); in_ebx = rd32(sp0 - 0x808u); g->ebp = rd32(sp0 - 0x80cu); g->ebx = rd32(sp0 - 0x808u); g->edi = rd32(sp0 - 0x814u); g->esi = rd32(sp0 - 0x810u); goto E_1022c0b6;
    case 0x1022c0c1u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x814u); in_esi = rd32(sp0 - 0x810u); in_ebp = rd32(sp0 - 0x80cu); in_ebx = rd32(sp0 - 0x808u); g->ebp = rd32(sp0 - 0x80cu); g->ebx = rd32(sp0 - 0x808u); g->edi = rd32(sp0 - 0x814u); g->esi = rd32(sp0 - 0x810u); goto E_1022c0c1;
    case 0x1022c0cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x814u); in_esi = rd32(sp0 - 0x810u); in_ebp = rd32(sp0 - 0x80cu); in_ebx = rd32(sp0 - 0x808u); g->ebp = rd32(sp0 - 0x80cu); g->ebx = rd32(sp0 - 0x808u); g->edi = rd32(sp0 - 0x814u); g->esi = rd32(sp0 - 0x810u); goto E_1022c0cd;
    case 0x1022c0d8u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x814u); in_esi = rd32(sp0 - 0x810u); in_ebp = rd32(sp0 - 0x80cu); in_ebx = rd32(sp0 - 0x808u); g->ebp = rd32(sp0 - 0x80cu); g->ebx = rd32(sp0 - 0x808u); g->edi = rd32(sp0 - 0x814u); g->esi = rd32(sp0 - 0x810u); goto E_1022c0d8;
    case 0x1022c0e0u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x814u); in_esi = rd32(sp0 - 0x810u); in_ebp = rd32(sp0 - 0x80cu); in_ebx = rd32(sp0 - 0x808u); g->ebp = rd32(sp0 - 0x80cu); g->ebx = rd32(sp0 - 0x808u); g->edi = rd32(sp0 - 0x814u); g->esi = rd32(sp0 - 0x810u); goto E_1022c0e0;
    case 0x1022c0e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x814u); in_esi = rd32(sp0 - 0x810u); in_ebp = rd32(sp0 - 0x80cu); in_ebx = rd32(sp0 - 0x808u); g->ebp = rd32(sp0 - 0x80cu); g->ebx = rd32(sp0 - 0x808u); g->edi = rd32(sp0 - 0x814u); g->esi = rd32(sp0 - 0x810u); goto E_1022c0e7;
    case 0x1022c0f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x814u); in_esi = rd32(sp0 - 0x810u); in_ebp = rd32(sp0 - 0x80cu); in_ebx = rd32(sp0 - 0x808u); g->ebp = rd32(sp0 - 0x80cu); g->ebx = rd32(sp0 - 0x808u); g->edi = rd32(sp0 - 0x814u); g->esi = rd32(sp0 - 0x810u); goto E_1022c0f0;
    case 0x1022c125u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c125;
    case 0x1022c12fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c12f;
    case 0x1022c134u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c134;
    case 0x1022c155u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c155;
    case 0x1022c161u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c161;
    case 0x1022c170u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c170;
    case 0x1022c17cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c17c;
    case 0x1022c189u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c189;
    case 0x1022c191u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c191;
    case 0x1022c19cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c19c;
    case 0x1022c1a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c1a2;
    case 0x1022c1a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c1a9;
    case 0x1022c1b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c1b1;
    case 0x1022c1ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c1cc;
    case 0x1022c1d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_1022c1d7;
    case 0x1022c1e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c1e3;
    case 0x1022c1eeu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c1ee;
    case 0x1022c1f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c1f6;
    case 0x1022c1fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c1fb;
    case 0x1022c201u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c201;
    case 0x1022c205u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c205;
    case 0x1022c20fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c20f;
    case 0x1022c219u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c219;
    case 0x1022c220u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c220;
    case 0x1022c226u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c226;
    case 0x1022c231u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c231;
    case 0x1022c233u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c233;
    case 0x1022c23eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c23e;
    case 0x1022c247u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_1022c247;
    default: break;
    }
#endif

    COW_AT(1022c070)
    wr32(sp0 - 0x808u, in_ebx);
    wr32(sp0 - 0x80cu, in_ebp);
    wr32(sp0 - 0x810u, in_esi);
    wr32(sp0 - 0x814u, in_edi);
    esi = self + 0x80u;
    edi = sp0 - 0x800u;
    ecx = 0x200u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = in_eax;
    edx = in_edx;
    esi = 0u;
    edi = rd32(COW_IMG(0x10667a74u));
L_1022c097: ;
    COW_AT(1022c097)
    if (rd16(esi * 2u + sp0 - 0x800u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi * 2u + sp0 - 0x800u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(esi * 2u + sp0 - 0x800u);
    COW_AT(1022c0a1)
        if (rd16(edi + (uint16_t)eax * 0x64u) == 0u)
        {
            eax = edi + (uint16_t)eax * 0x64u;
        }
        else
        {
            eax = edi + (uint16_t)eax * 0x64u;
    COW_AT(1022c0b6)
            if (arg2 == 0u) goto L_1022c0cd;
    COW_AT(1022c0c1)
            if (arg2 >> (rd8(eax + 2u) & 0x1fu) & 1u)
            {
                ecx = (arg2 & 0xffffff00u) | rd8(eax + 2u);
                edx = arg2 >> (rd8(eax + 2u) & 0x1fu);
                goto L_1022c0e7;
            }
            edx = arg2 >> (rd8(eax + 2u) & 0x1fu);
L_1022c0cd: ;
    COW_AT(1022c0cd)
            if (arg1 == 0u) goto L_1022c0e0;
    COW_AT(1022c0d8)
            if ((uint32_t)(int16_t)rd16(eax + 2u) != arg1)
            {
                eax = (uint32_t)(int16_t)rd16(eax + 2u);
                ecx = arg1;
                goto L_1022c0e7;
            }
            eax = (uint32_t)(int16_t)rd16(eax + 2u);
L_1022c0e0: ;
    COW_AT(1022c0e0)
            wr16(esi * 2u + sp0 - 0x800u, 0u);
            ecx = arg1;
        }
    }
L_1022c0e7: ;
    COW_AT(1022c0e7)
    if ((int32_t)(esi + 1u) < 1024)
    {
        esi = esi + 1u;
        goto L_1022c097;
    }
    COW_AT(1022c0f0)
    wr32(sp0 - 0x818u, 0x400u);
    wr32(sp0 - 0x81cu, self + 0x80u);
    wr32(sp0 - 0x820u, self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x80cu;
    t1 = cow_cdecl(g, COW_IMG(0x1021e500u), 5, self, self + 0x80u, 0x400u, in_edi, in_esi);
    t2 = g->edx;
    wr32(self + 0x880u, 0u);
    g->esp = sp0 - 0x814u;
    cow_thiscall(g, COW_IMG(0x1022c030u), self, 0);
    edi = self + 0x80u;
    eax = 0u;
    ecx = 0x200u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = 1u;
    edi = 0x64u;
L_1022c125: ;
    COW_AT(1022c125)
    if ((int32_t)(esi & 0x80000007u) >= 0)
    {
        ecx = esi & 0x80000007u;
        pf = PARITY(esi & 7u);
        zf = (esi & 0x80000007u) == 0u;
        sf = (int32_t)(esi & 0x80000007u) < 0;
        of = 0u;
    }
    else
    {
        ecx = esi & 0x80000007u;
    COW_AT(1022c12f)
        pf = PARITY((uint8_t)((ecx - 1u | 0xfffffff8u) + 1u));
        zf = (ecx - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)((ecx - 1u | 0xfffffff8u) + 1u) < 0;
        of = (ecx - 1u | 0xfffffff8u) + 1u == 0x80000000u;
        ecx = (ecx - 1u | 0xfffffff8u) + 1u;
    }
    COW_AT(1022c134)
    t3 = 1u << (ecx & 0x1fu);
    wr32(sp0 - 0x804u, t3);
    if ((rd8(self + (uint32_t)((int32_t)(esi + ((uint32_t)((int32_t)esi >> 0x1fu) & 7u)) >> 3u)) & (uint8_t)t3) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + (uint32_t)((int32_t)(esi + ((uint32_t)((int32_t)esi >> 0x1fu) & 7u)) >> 3u));
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(self + (uint32_t)((int32_t)(esi + ((uint32_t)((int32_t)esi >> 0x1fu) & 7u)) >> 3u));
    COW_AT(1022c155)
        if (rd16(edi + rd32(COW_IMG(0x10667a74u))) != 0u)
        {
            eax = rd32(COW_IMG(0x10667a74u));
    COW_AT(1022c161)
            wr16(self + rd16(eax + edi + 0x3eu) * 2u + 0x80u, (uint16_t)esi);
        }
    }
    COW_AT(1022c170)
    if ((int32_t)(edi + 0x64u) < 102400)
    {
        esi = esi + 1u;
        edi = edi + 0x64u;
        goto L_1022c125;
    }
    COW_AT(1022c17c)
    eax = self + 0x82u;
    edx = self + 0x80u;
    esi = 0x3ffu;
L_1022c189: ;
    COW_AT(1022c189)
    if (rd16(eax) == 0u)
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(eax);
    COW_AT(1022c191)
        wr16(edx, (uint16_t)ecx);
        wr16(eax, 0u);
        edx = edx + 2u;
    }
    COW_AT(1022c19c)
    if (esi != 1u)
    {
        eax = eax + 2u;
        esi = esi - 1u;
        goto L_1022c189;
    }
    eax = eax + 2u;
    COW_AT(1022c1a2)
    esi = self + 0x80u;
    edi = 0x400u;
L_1022c1a9: ;
    COW_AT(1022c1a9)
    if (rd16(esi) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(esi);
    COW_AT(1022c1b1)
        if (rd16((uint16_t)eax * 0x64u + rd32(COW_IMG(0x10667a74u))) == 0u)
        {
            eax = (uint16_t)eax * 0x64u + rd32(COW_IMG(0x10667a74u));
        }
        else
        {
            eax = (uint16_t)eax * 0x64u + rd32(COW_IMG(0x10667a74u));
            ecx = rd32(COW_IMG(0x10667a74u));
    COW_AT(1022c1cc)
            if (arg2 == 0u) goto L_1022c1e3;
    COW_AT(1022c1d7)
            if (arg2 >> (rd8(eax + 2u) & 0x1fu) & 1u) goto L_1022c1f6;
L_1022c1e3: ;
    COW_AT(1022c1e3)
            if (arg1 == 0u) goto L_1022c1fb;
    COW_AT(1022c1ee)
            if ((uint32_t)(int16_t)rd16(eax + 2u) == arg1)
            {
                eax = (uint32_t)(int16_t)rd16(eax + 2u);
                goto L_1022c1fb;
            }
            eax = (uint32_t)(int16_t)rd16(eax + 2u);
L_1022c1f6: ;
    COW_AT(1022c1f6)
            wr16(esi, 0u);
        }
    }
L_1022c1fb: ;
    COW_AT(1022c1fb)
    if (edi != 1u)
    {
        esi = esi + 2u;
        edi = edi - 1u;
        goto L_1022c1a9;
    }
    esi = esi + 2u;
    COW_AT(1022c201)
    edx = 0u;
    edi = 0u;
L_1022c205: ;
    COW_AT(1022c205)
    if (rd16(edi * 2u + sp0 - 0x800u) == 0u)
    {
        esi = (esi & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x800u);
    }
    else
    {
        esi = (esi & 0xffff0000u) | rd16(edi * 2u + sp0 - 0x800u);
    COW_AT(1022c20f)
        if ((int32_t)edx < 1024)
        {
            eax = edx;
    COW_AT(1022c219)
            ecx = edx * 2u + self + 0x80u;
L_1022c220: ;
    COW_AT(1022c220)
            if (rd16(ecx) == 0u) goto L_1022c233;
    COW_AT(1022c226)
            if ((int32_t)(eax + 1u) < 1024)
            {
                eax = eax + 1u;
                ecx = ecx + 2u;
                goto L_1022c220;
            }
    COW_AT(1022c231)
        }
    }
L_1022c23e: ;
    COW_AT(1022c23e)
    if ((int32_t)(edi + 1u) < 1024)
    {
        edi = edi + 1u;
        goto L_1022c205;
    }
    COW_AT(1022c247)
    g->ebx = rd32(sp0 - 0x808u);
    g->esi = rd32(sp0 - 0x810u);
    g->edi = rd32(sp0 - 0x814u);
    g->ebp = rd32(sp0 - 0x80cu);
    return;
L_1022c233: ;
    COW_AT(1022c233)
    wr16(eax * 2u + self + 0x80u, (uint16_t)esi);
    edx = eax + 1u;
    goto L_1022c23e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022c070(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022c097u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x814u);
        in_esi = rd32(sp0 - 0x810u);
        in_ebp = rd32(sp0 - 0x80cu);
        in_ebx = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c0a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x814u);
        in_esi = rd32(sp0 - 0x810u);
        in_ebp = rd32(sp0 - 0x80cu);
        in_ebx = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c0b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x814u);
        in_esi = rd32(sp0 - 0x810u);
        in_ebp = rd32(sp0 - 0x80cu);
        in_ebx = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c0c1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x814u);
        in_esi = rd32(sp0 - 0x810u);
        in_ebp = rd32(sp0 - 0x80cu);
        in_ebx = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x814u;
        g->ecx = arg2;
        g->ebp = self + 0x80u;
        g->cf = (uint8_t)(0u);
        g->pf = (uint8_t)(PARITY((uint8_t)arg2));
        g->zf = (uint8_t)(arg2 == 0u);
        g->sf = (uint8_t)((int32_t)arg2 < 0);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x1022c0cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x814u);
        in_esi = rd32(sp0 - 0x810u);
        in_ebp = rd32(sp0 - 0x80cu);
        in_ebx = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c0d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x814u);
        in_esi = rd32(sp0 - 0x810u);
        in_ebp = rd32(sp0 - 0x80cu);
        in_ebx = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x814u;
        g->ecx = arg1;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c0e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x814u);
        in_esi = rd32(sp0 - 0x810u);
        in_ebp = rd32(sp0 - 0x80cu);
        in_ebx = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x814u;
        g->ecx = arg1;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c0e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x814u);
        in_esi = rd32(sp0 - 0x810u);
        in_ebp = rd32(sp0 - 0x80cu);
        in_ebx = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c0f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x814u);
        in_esi = rd32(sp0 - 0x810u);
        in_ebp = rd32(sp0 - 0x80cu);
        in_ebx = rd32(sp0 - 0x808u);
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c125u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c12fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c134u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        g->cf = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x1022c155u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c161u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c170u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c17cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c189u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c191u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c19cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c1a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        g->ebp = self + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1022c1a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c1b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c1ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c1d7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x814u;
        g->ebp = arg2;
        g->cf = (uint8_t)(0u);
        g->pf = (uint8_t)(PARITY((uint8_t)arg2));
        g->zf = (uint8_t)(arg2 == 0u);
        g->sf = (uint8_t)((int32_t)arg2 < 0);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x1022c1e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c1eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1022c1f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c1fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c201u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c205u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c20fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c219u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c220u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c226u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c231u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c233u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c23eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    case 0x1022c247u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x814u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022c070(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1022c070(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
