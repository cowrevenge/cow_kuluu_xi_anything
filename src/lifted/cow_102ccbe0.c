/* f_0x102ccbe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102ccbe0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d2;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d34;
    double d35;
    double d36;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_4_f;
    double loc_8_f;
    uint32_t t3;
    uint32_t t33;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    double x0;
    double x1;
    double x2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ccc19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccc19;
    case 0x102ccc29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccc29;
    case 0x102ccc2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccc2b;
    case 0x102ccc30u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccc30;
    case 0x102ccc33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccc33;
    case 0x102ccc38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccc38;
    case 0x102ccc40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccc40;
    case 0x102ccc46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccc46;
    case 0x102ccc4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccc4c;
    case 0x102ccc6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccc6a;
    case 0x102ccc8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccc8c;
    case 0x102ccc99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccc99;
    case 0x102cccabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; x0 = ST(0); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102cccab;
    case 0x102cccb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102cccb5;
    case 0x102cccd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102cccd9;
    case 0x102cccdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102cccdb;
    case 0x102ccd14u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccd14;
    case 0x102ccd2du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccd2d;
    case 0x102ccd44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccd44;
    case 0x102ccd4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccd4c;
    case 0x102ccd68u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccd68;
    case 0x102ccd81u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccd81;
    case 0x102ccd98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccd98;
    case 0x102ccda2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccda2;
    case 0x102ccdb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccdb3;
    case 0x102ccdc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccdc4;
    case 0x102ccdd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccdd9;
    case 0x102ccdeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccdee;
    case 0x102ccdfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccdfb;
    case 0x102cce02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102cce02;
    case 0x102cce1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102cce1f;
    case 0x102cce33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102cce33;
    case 0x102cce50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102cce50;
    case 0x102cce64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102cce64;
    case 0x102ccea4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccea4;
    case 0x102ccee1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccee1;
    case 0x102cceeeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102cceee;
    case 0x102ccf13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8_f = rdf32(sp0 - 8u); loc_4_f = rdf32(sp0 - 4u); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102ccf13;
    default: break;
    }
#endif

    COW_AT(102ccbe0)
    if ((int32_t)rd32(sp0 + 8u) < (int32_t)rd32(rd32(sp0 + 4u) + 0xb64u))
    {
        eax = rd32(rd32(sp0 + 4u) + rd32(sp0 + 8u) * 4u + 0xb78u);
        ecx = rd32(sp0 + 4u);
        edx = rd32(sp0 + 8u);
        ebx = rd32(rd32(sp0 + 4u) + rd32(sp0 + 8u) * 4u + 0xb68u);
        esi = rd32(sp0 + 4u) + rd32(sp0 + 8u) * 4u + 0xc80u;
        edi = rd32(sp0 + 4u) + rd32(sp0 + 8u) * 4u + 0x39f0u;
        goto L_102cccb5;
    }
    eax = rd32(rd32(sp0 + 4u) + rd32(sp0 + 8u) * 4u + 0xb78u);
    ecx = rd32(sp0 + 4u);
    esi = rd32(sp0 + 4u) + rd32(sp0 + 8u) * 4u + 0xc80u;
    edi = rd32(sp0 + 4u) + rd32(sp0 + 8u) * 4u + 0x39f0u;
    COW_AT(102ccc19)
    if ((int32_t)eax >= 0)
    {
        edx = rd32(ecx + 0xb88u);
        ecx = rd32(ecx + 0xb8cu);
    }
    else
    {
        edx = rd32(ecx + 0xb88u);
        ecx = rd32(ecx + 0xb8cu);
    COW_AT(102ccc29)
        eax = -eax;
    }
    COW_AT(102ccc2b)
    if (eax == 0u) goto L_102ccc40;
    COW_AT(102ccc30)
    if (eax == 1u) goto L_102ccc46;
    eax = eax - 1u;
    COW_AT(102ccc33)
    if (eax == 2u)
    {
    COW_AT(102ccc38)
        ecx = ecx & 7u;
        edx = edx & 7u;
    }
L_102ccc4c: ;
    COW_AT(102ccc4c)
    d1 = fr(g, (double)rdf32(COW_IMG(0x103439b8u) + edx * 4u) - (double)rdf32(COW_IMG(0x103439b8u) + ecx * 4u));
    d2 = (double)rdf32(COW_IMG(0x103439b8u) + ecx * 4u);
    wr32(sp0 + 4u, 0xfffffff8u);
    x1 = fr(g, d1 * (double)rdf32(COW_IMG(0x1032a3bcu)));
    x0 = d2;
L_102ccc6a: ;
    COW_AT(102ccc6a)
    t3 = rd32(sp0 + 4u) + 1u;
    t4 = rd32(sp0 + 4u);
    d5 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * x1);
    d6 = fr(g, (double)rdf32(edi) + (double)rdf32(esi));
    wr32(sp0 + 4u, t3);
    wrf32(esi, (float)fr(g, d6 / fr(g, x0 - d5)));
    if ((int32_t)(t4 + 1u) < 0)
    {
        esi = esi + 0x10u;
        edi = edi + 0x10u;
        goto L_102ccc6a;
    }
    esi = esi + 0x10u;
    edi = edi + 0x10u;
    COW_AT(102ccc8c)
    eax = 0xf8u;
    x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
L_102ccc99: ;
    COW_AT(102ccc99)
    d7 = fr(g, fr(g, (double)rdf32(edi) + (double)rdf32(esi)) * x0);
    wrf32(esi, (float)d7);
    if (eax != 1u)
    {
        eax = eax - 1u;
        esi = esi + 0x10u;
        edi = edi + 0x10u;
        goto L_102ccc99;
    }
    COW_AT(102cccab)
    return;
L_102ccc40: ;
    COW_AT(102ccc40)
    ecx = ecx ^ 8u;
    edx = edx ^ 8u;
L_102ccc46: ;
    COW_AT(102ccc46)
    ecx = ecx + 8u;
    edx = edx + 8u;
    goto L_102ccc4c;
L_102cccb5: ;
    COW_AT(102cccb5)
    d8 = (double)rdf32(ecx + edx * 0x10u + 0xbb0u);
    wrf32(sp0 + 4u, (float)d8);
    d9 = (double)rdf32(ecx + edx * 0x10u + 0xbb4u);
    wrf32(sp0 + 8u, (float)d9);
    if ((int32_t)eax < 0)
    {
    COW_AT(102cccd9)
        eax = -eax;
    }
    COW_AT(102cccdb)
    d10 = (double)(float)(double)rdf32(COW_IMG(0x103439a0u) + ebx * 4u);
    d11 = (double)(float)(double)rdf32(COW_IMG(0x103439a4u) + ebx * 4u);
    d12 = (double)rdf32(COW_IMG(0x103439a4u) + eax * 4u);
    d13 = (double)rdf32(COW_IMG(0x103439a0u) + eax * 4u);
    wr32(ecx + edx * 4u + 0xba0u, 0x3f800000u);
    if (eax != 3u)
    {
        loc_8_f = d10;
        loc_4_f = d11;
        x1 = d12;
        x0 = d13;
    }
    else
    {
        loc_8_f = d10;
        loc_4_f = d11;
        x1 = d12;
        x0 = d13;
    COW_AT(102ccd14)
        d14 = (double)rdf32(sp0 + 8u);
        d15 = fr(g, (double)rdf32(sp0 + 4u) * rdf64(COW_IMG(0x10343d88u)));
        if ((cow_fsw(g, d14, d15, 2u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d14, d15, 2u) & 0x4100u;
            goto L_102ccd68;
        }
        eax = cow_fsw(g, d14, d15, 2u) & 0x4100u;
    COW_AT(102ccd2d)
        d16 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032a344u)));
        d17 = (double)rdf32(sp0 + 8u);
        if ((cow_fsw(g, d16, d17, 2u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d16, d17, 2u) & 0x4100u;
            goto L_102ccd68;
        }
        eax = cow_fsw(g, d16, d17, 2u) & 0x4100u;
    COW_AT(102ccd44)
        x2 = fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(sp0 + 4u));
L_102ccd4c: ;
    COW_AT(102ccd4c)
        d22 = fr(g, fr(g, x2 * (double)rdf32(COW_IMG(0x10343d80u))) / fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(sp0 + 4u)));
        wrf32(ecx + edx * 4u + 0xba0u, (float)d22);
    }
L_102cce02: ;
    COW_AT(102cce02)
    d29 = fr(g, (double)rdf32(ecx + edx * 4u + 0xba0u) - (double)rdf32(ecx + edx * 4u + 0xb90u));
    if ((cow_fsw(g, d29, rdf64(COW_IMG(0x1033cd90u)), 2u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d29, rdf64(COW_IMG(0x1033cd90u)), 2u) & 0x100u;
    }
    else
    {
        eax = cow_fsw(g, d29, rdf64(COW_IMG(0x1033cd90u)), 2u) & 0x100u;
    COW_AT(102cce1f)
        d30 = fr(g, (double)rdf32(ecx + edx * 4u + 0xb90u) + rdf64(COW_IMG(0x1033cd90u)));
        wrf32(ecx + edx * 4u + 0xba0u, (float)d30);
    }
    COW_AT(102cce33)
    d31 = fr(g, (double)rdf32(ecx + edx * 4u + 0xb90u) - (double)rdf32(ecx + edx * 4u + 0xba0u));
    if ((cow_fsw(g, d31, rdf64(COW_IMG(0x1033cd90u)), 2u) & 0x100u) == 0u)
    {
    COW_AT(102cce50)
        d32 = fr(g, (double)rdf32(ecx + edx * 4u + 0xb90u) - rdf64(COW_IMG(0x1033cd90u)));
        wrf32(ecx + edx * 4u + 0xba0u, (float)d32);
    }
    COW_AT(102cce64)
    t33 = rd32(ecx + edx * 4u + 0xba0u);
    d34 = fr(g, loc_4_f * (double)rdf32(ecx + edx * 4u + 0xb90u));
    d35 = fr(g, x1 * (double)rdf32(ecx + edx * 4u + 0xba0u));
    wr32(sp0 + 4u, 0xfffffff8u);
    wr32(ecx + edx * 4u + 0xb90u, t33);
    d36 = (double)(float)fr(g, fr(g, loc_8_f - x0) * (double)rdf32(COW_IMG(0x1032a3bcu)));
    loc_8_f = d36;
    x2 = fr(g, fr(g, d34 - d35) * (double)rdf32(COW_IMG(0x1032a3bcu)));
    x1 = d35;
L_102ccea4: ;
    COW_AT(102ccea4)
    t37 = rd32(sp0 + 4u) + 1u;
    t38 = rd32(sp0 + 4u);
    d39 = fr(g, fr(g, (double)rdf32(edi) + (double)rdf32(esi)) * (double)rdf32(COW_IMG(0x10329a08u)));
    d40 = (double)rdf32(esi);
    wr32(sp0 + 4u, t37);
    wrf32(edi, (float)fr(g, fr(g, d40 - fr(g, fr(g, x0 - fr(g, loc_8_f * (double)(int32_t)t38)) * d39)) / fr(g, x1 - fr(g, (double)(int32_t)t38 * x2))));
    wrf32(esi, (float)d39);
    if ((int32_t)(t38 + 1u) < 0)
    {
        esi = esi + 0x10u;
        edi = edi + 0x10u;
        goto L_102ccea4;
    }
    esi = esi + 0x10u;
    edi = edi + 0x10u;
    COW_AT(102ccee1)
    eax = 0xf8u;
    x1 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x1);
L_102cceee: ;
    COW_AT(102cceee)
    d41 = fr(g, fr(g, (double)rdf32(edi) + (double)rdf32(esi)) * (double)rdf32(COW_IMG(0x10329a08u)));
    d42 = fr(g, fr(g, (double)rdf32(esi) - fr(g, d41 * x0)) * x1);
    d43 = (double)rdf32(esi);
    wrf32(edi, (float)d42);
    wrf32(esi, (float)d41);
    if (eax != 1u)
    {
        eax = eax - 1u;
        esi = esi + 0x10u;
        edi = edi + 0x10u;
        goto L_102cceee;
    }
    COW_AT(102ccf13)
    return;
L_102ccd68: ;
    COW_AT(102ccd68)
    d18 = (double)rdf32(sp0 + 4u);
    d19 = fr(g, (double)rdf32(sp0 + 8u) * rdf64(COW_IMG(0x10343d88u)));
    if ((cow_fsw(g, d18, d19, 2u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d18, d19, 2u) & 0x4100u;
        goto L_102ccda2;
    }
    eax = cow_fsw(g, d18, d19, 2u) & 0x4100u;
    COW_AT(102ccd81)
    d20 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032a344u)));
    d21 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d20, d21, 2u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d20, d21, 2u) & 0x4100u;
        goto L_102ccda2;
    }
    eax = cow_fsw(g, d20, d21, 2u) & 0x4100u;
    COW_AT(102ccd98)
    x2 = fr(g, (double)rdf32(sp0 + 4u) - (double)rdf32(sp0 + 8u));
    goto L_102ccd4c;
L_102ccda2: ;
    COW_AT(102ccda2)
    d23 = (double)rdf32(sp0 + 8u);
    if (d23 == rdf64(COW_IMG(0x1032a108u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, rdf64(COW_IMG(0x1032a108u)), 2u);
        goto L_102ccdfb;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, rdf64(COW_IMG(0x1032a108u)), 2u);
    COW_AT(102ccdb3)
    d24 = (double)rdf32(sp0 + 4u);
    if (d24 == rdf64(COW_IMG(0x1032a108u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, rdf64(COW_IMG(0x1032a108u)), 2u);
        goto L_102ccdfb;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, rdf64(COW_IMG(0x1032a108u)), 2u);
    COW_AT(102ccdc4)
    d25 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032a344u)));
    d26 = (double)rdf32(sp0 + 4u);
    if (d25 <= d26)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, d26, 2u);
        goto L_102ccdee;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, d26, 2u);
    COW_AT(102ccdd9)
    d27 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032a344u)));
    d28 = (double)rdf32(sp0 + 8u);
    if (!(d27 <= d28))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, d28, 2u);
        goto L_102ccdfb;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, d28, 2u);
L_102ccdee: ;
    COW_AT(102ccdee)
    wr32(ecx + edx * 4u + 0xba0u, 0x3fd55555u);
    goto L_102cce02;
L_102ccdfb: ;
    COW_AT(102ccdfb)
    wr32(ecx + edx * 4u + 0xba0u, 0x3f800000u);
    goto L_102cce02;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ccbe0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ccc19u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccc29u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccc2bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccc30u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccc33u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccc38u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccc40u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccc46u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccc4cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccc6au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccc8cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccc99u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102cccabu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102cccb5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102cccd9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102cccdbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccd14u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x102ccd2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x102ccd44u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccd4cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccd68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x102ccd81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x102ccd98u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccda2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x102ccdb3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x102ccdc4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x102ccdd9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x102ccdeeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccdfbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x102cce02u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102cce1fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102cce33u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102cce50u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102cce64u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccea4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccee1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102cceeeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102ccf13u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_4_f;
        double loc_8_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8_f = rdf32(sp0 - 8u);
        loc_4_f = rdf32(sp0 - 4u);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ccbe0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102ccbe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
