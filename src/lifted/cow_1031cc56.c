/* f_0x1031cc56 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1031cc56(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031cc7au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cc7a;
    case 0x1031cc83u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cc83;
    case 0x1031cc8au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cc8a;
    case 0x1031cc93u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cc93;
    case 0x1031cc9bu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cc9b;
    case 0x1031cca2u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cca2;
    case 0x1031cca4u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cca4;
    case 0x1031ccabu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ccab;
    case 0x1031ccb1u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ccb1;
    case 0x1031ccb7u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ccb7;
    case 0x1031ccbcu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ccbc;
    case 0x1031ccc0u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ccc0;
    case 0x1031ccc4u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ccc4;
    case 0x1031ccc9u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ccc9;
    case 0x1031ccceu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ccce;
    case 0x1031ccdau: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ccda;
    case 0x1031cce1u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cce1;
    case 0x1031cce6u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cce6;
    case 0x1031cceeu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ccee;
    case 0x1031ccf1u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ccf1;
    case 0x1031ccf5u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ccf5;
    case 0x1031ccfdu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ccfd;
    case 0x1031cd03u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd03;
    case 0x1031cd09u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd09;
    case 0x1031cd0eu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd0e;
    case 0x1031cd12u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd12;
    case 0x1031cd1au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd1a;
    case 0x1031cd23u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd23;
    case 0x1031cd2cu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd2c;
    case 0x1031cd33u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd33;
    case 0x1031cd37u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd37;
    case 0x1031cd3fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd3f;
    case 0x1031cd43u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd43;
    case 0x1031cd4au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd4a;
    case 0x1031cd52u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd52;
    case 0x1031cd5bu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd5b;
    case 0x1031cd64u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd64;
    case 0x1031cd69u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd69;
    case 0x1031cd73u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd73;
    case 0x1031cd75u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cd75;
    default: break;
    }
#endif

    COW_AT(1031cc56)
    t1 = rd32(rd32(sp0 + 4u));
    t2 = rd32(sp0 + 4u) + 0xf8u;
    t3 = rd32(sp0 + 4u);
    t4 = rd32(rd32(sp0 + 4u) + 4u);
    wr32(sp0 + 4u, t2);
    if (t4 < arg3)
    {
        eax = t1;
        ecx = t3;
        ebx = t2;
        esi = t4;
        edi = t1;
        loc_8 = t1;
        goto L_1031cc9b;
    }
    ecx = t3;
    ebx = t2;
    edi = t1;
    COW_AT(1031cc7a)
    wr8(edi, (uint8_t)arg3);
    if (arg3 + edi >= ebx)
    {
    COW_AT(1031cc8a)
        wr32(ecx + 4u, 0u);
        wr32(ecx, ecx + 8u);
    }
    else
    {
    COW_AT(1031cc83)
        wr32(ecx, arg3 + rd32(ecx));
        wr32(ecx + 4u, rd32(ecx + 4u) - arg3);
    }
    COW_AT(1031cc93)
    eax = edi + 8u;
L_1031cd69: ;
    COW_AT(1031cd69)
    eax = (eax << 4u) - ecx * 0xfu;
L_1031cd75: ;
    COW_AT(1031cd75)
    g->edx = arg3;
    return eax;
L_1031cc9b: ;
    COW_AT(1031cc9b)
    if (rd8(edi + esi) != 0u)
    {
        esi = edi + esi;
    COW_AT(1031cca2)
        eax = esi;
    }
    COW_AT(1031cca4)
    if (arg3 + eax >= ebx) goto L_1031ccee;
L_1031ccab: ;
    COW_AT(1031ccab)
    if (rd8(eax) != 0u)
    {
        ebx = (ebx & 0xffffff00u) | rd8(eax);
        goto L_1031cce1;
    }
    COW_AT(1031ccb1)
    ebx = eax + 1u;
    esi = 1u;
L_1031ccb7: ;
    COW_AT(1031ccb7)
    if (rd8(ebx) != 0u) goto L_1031ccc0;
    COW_AT(1031ccbc)
    ebx = ebx + 1u;
    esi = esi + 1u;
    goto L_1031ccb7;
L_1031ccc0: ;
    COW_AT(1031ccc0)
    if (esi >= arg3) goto L_1031cd12;
    COW_AT(1031ccc4)
    if (eax != loc_8) goto L_1031ccce;
    COW_AT(1031ccc9)
    wr32(ecx + 4u, esi);
L_1031ccda: ;
    COW_AT(1031ccda)
    eax = ebx;
    edi = loc_8;
L_1031cce6: ;
    COW_AT(1031cce6)
    if (arg3 + eax < rd32(sp0 + 4u)) goto L_1031ccab;
L_1031ccee: ;
    COW_AT(1031ccee)
    esi = ecx + 8u;
L_1031ccf1: ;
    COW_AT(1031ccf1)
    if (esi >= edi) goto L_1031cd73;
    COW_AT(1031ccf5)
    if (arg3 + esi >= rd32(sp0 + 4u)) goto L_1031cd73;
    eax = arg3 + esi;
    COW_AT(1031ccfd)
    if (rd8(esi) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_1031cd43;
    }
    COW_AT(1031cd03)
    eax = 1u;
    ebx = esi + 1u;
L_1031cd09: ;
    COW_AT(1031cd09)
    if (rd8(ebx) != 0u) goto L_1031cd33;
    COW_AT(1031cd0e)
    eax = eax + 1u;
    ebx = ebx + 1u;
    goto L_1031cd09;
L_1031ccce: ;
    COW_AT(1031ccce)
    wr32(sp0 + 8u, rd32(sp0 + 8u) - esi);
    if (rd32(sp0 + 8u) < arg3) goto L_1031cd73;
    goto L_1031ccda;
L_1031cce1: ;
    COW_AT(1031cce1)
    eax = eax + (uint8_t)ebx;
    goto L_1031cce6;
L_1031cd12: ;
    COW_AT(1031cd12)
    if (arg3 + eax >= rd32(sp0 + 4u))
    {
    COW_AT(1031cd23)
        wr32(ecx + 4u, 0u);
        wr32(ecx, ecx + 8u);
    }
    else
    {
        ebx = arg3 + eax;
    COW_AT(1031cd1a)
        wr32(ecx, ebx);
        wr32(ecx + 4u, esi - arg3);
    }
    COW_AT(1031cd2c)
    wr8(eax, (uint8_t)arg3);
    eax = eax + 8u;
    goto L_1031cd69;
L_1031cd33: ;
    COW_AT(1031cd33)
    if (eax >= arg3) goto L_1031cd4a;
    COW_AT(1031cd37)
    wr32(sp0 + 8u, rd32(sp0 + 8u) - eax);
    if (rd32(sp0 + 8u) < arg3) goto L_1031cd73;
    COW_AT(1031cd3f)
    esi = ebx;
    goto L_1031ccf1;
L_1031cd43: ;
    COW_AT(1031cd43)
    esi = esi + (uint8_t)eax;
    goto L_1031ccf1;
L_1031cd4a: ;
    COW_AT(1031cd4a)
    if (arg3 + esi >= rd32(sp0 + 4u))
    {
    COW_AT(1031cd5b)
        wr32(ecx + 4u, 0u);
        wr32(ecx, ecx + 8u);
    }
    else
    {
        ebx = arg3 + esi;
    COW_AT(1031cd52)
        wr32(ecx, ebx);
        wr32(ecx + 4u, eax - arg3);
    }
    COW_AT(1031cd64)
    wr8(esi, (uint8_t)arg3);
    eax = esi + 8u;
    goto L_1031cd69;
L_1031cd73: ;
    COW_AT(1031cd73)
    eax = 0u;
    goto L_1031cd75;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031cc56(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031cc7au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cc83u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cc8au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cc93u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cc9bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cca2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cca4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ccabu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ccb1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ccb7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ccbcu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ccc0u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ccc4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ccc9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ccceu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ccdau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cce1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cce6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cceeu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ccf1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ccf5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ccfdu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd03u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd09u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd0eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd12u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd1au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd23u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd2cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd33u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd37u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd3fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd43u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd4au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd52u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd5bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd64u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd69u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd73u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cd75u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031cc56(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1031cc56(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
