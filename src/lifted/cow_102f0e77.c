/* f_0x102f0e77 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102f0e77(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f0e95u: ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0e95;
    case 0x102f0e99u: ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0e99;
    case 0x102f0ea2u: ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0ea2;
    case 0x102f0eaau: ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0eaa;
    case 0x102f0eb8u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0eb8;
    case 0x102f0ec3u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0ec3;
    case 0x102f0ecbu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0ecb;
    case 0x102f0ed3u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0ed3;
    case 0x102f0ed8u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0ed8;
    case 0x102f0ee3u: edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0ee3;
    case 0x102f0ee5u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0ee5;
    case 0x102f0f04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0f04;
    case 0x102f0f09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0f09;
    case 0x102f0f14u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; pf = g->pf; zf = g->zf; sf = g->sf; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0f14;
    case 0x102f0f1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0f1b;
    case 0x102f0f6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0f6c;
    case 0x102f0f71u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0f71;
    case 0x102f0f76u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0f76;
    case 0x102f0f81u: edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0f81;
    case 0x102f0f83u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0f83;
    case 0x102f0f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0f90;
    case 0x102f0f95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0f95;
    case 0x102f0fa0u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0fa0;
    case 0x102f0fa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0fa4;
    case 0x102f0fc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0fc1;
    case 0x102f0fc6u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0fc6;
    case 0x102f0fcbu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0fcb;
    case 0x102f0fd6u: edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0fd6;
    case 0x102f0fd8u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0fd8;
    case 0x102f0ff6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0ff6;
    case 0x102f0ffbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f0ffb;
    case 0x102f1006u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; pf = g->pf; zf = g->zf; sf = g->sf; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1006;
    case 0x102f100du: eax = g->eax; ecx = g->ecx; edx = g->edx; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f100d;
    case 0x102f105du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f105d;
    case 0x102f1062u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1062;
    case 0x102f106bu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f106b;
    case 0x102f1079u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1079;
    case 0x102f1083u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1083;
    case 0x102f1127u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1127;
    case 0x102f112du: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f112d;
    case 0x102f1135u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1135;
    case 0x102f1140u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1140;
    case 0x102f1146u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1146;
    case 0x102f1176u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1176;
    case 0x102f1178u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1178;
    case 0x102f117du: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f117d;
    case 0x102f1184u: edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1184;
    case 0x102f1186u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1186;
    case 0x102f1192u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1192;
    case 0x102f1194u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1194;
    case 0x102f1199u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f1199;
    case 0x102f11a0u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f11a0;
    case 0x102f11a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f11a4;
    case 0x102f11c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f11c0;
    case 0x102f11c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_102f11c1;
    default: break;
    }
#endif

    COW_AT(102f0e77)
    t1 = rd32(rd32(sp0 + 4u));
    if (rd8(rd32(sp0 + 4u) + 9u) > 8u)
    {
        ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 9u);
        edx = t1;
        edi = rd32(sp0 + 4u);
        loc_18 = t1;
        goto L_102f0e99;
    }
    ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 9u);
    edx = t1;
    edi = rd32(sp0 + 4u);
    loc_18 = t1;
    COW_AT(102f0e95)
    if (arg3 != 0u) goto L_102f0eaa;
L_102f0e99: ;
    COW_AT(102f0e99)
    if ((uint8_t)ecx != 0x10u) goto L_102f11c1;
    COW_AT(102f0ea2)
    if (arg4 == 0u) goto L_102f11c1;
L_102f0eaa: ;
    COW_AT(102f0eaa)
    if (rd8(edi + 8u) == 0u)
    {
    COW_AT(102f1062)
        if ((uint8_t)ecx == 2u)
        {
    COW_AT(102f106b)
            if (edx == 0u)
            {
                ecx = arg2;
            }
            else
            {
    COW_AT(102f1079)
                t26 = ((edx - 1u) >> 2u) + 1u;
                loc_8 = arg2;
                loc_c = t26;
L_102f1083: ;
    COW_AT(102f1083)
                t27 = rd8(loc_8) & 0xc0u;
                t28 = rd8(loc_8) & 3u;
                t29 = rd8(loc_8) & 0xcu;
                t30 = rd8(loc_8) & 0x30u;
                t31 = ((rd8(arg3 + ((t29 << 2u | t29) << 2u | (uint32_t)((int32_t)t29 >> 2u) | t29)) & 0xcfu) | rd8(arg3 + (((t28 << 2u | t28) << 2u | t28) << 2u | t28)) >> 2u) >> 2u | (rd8(arg3 + ((uint32_t)((int32_t)((uint32_t)((int32_t)t30 >> 2u) | t30) >> 2u) | t30 << 2u | t30)) & 0xc3u);
                wr8(loc_8, (uint8_t)t31 >> 2u | (rd8(arg3 + ((uint32_t)((int32_t)((uint32_t)((int32_t)((uint32_t)((int32_t)t27 >> 2u) | t27) >> 2u) | t27) >> 2u) | t27)) & 0xc0u));
                if (loc_c != 1u)
                {
                    loc_8 = loc_8 + 1u;
                    loc_c = loc_c - 1u;
                    goto L_102f1083;
                }
                ecx = loc_8;
    COW_AT(102f1127)
                edx = loc_18;
                edi = rd32(sp0 + 4u);
            }
        }
    COW_AT(102f112d)
        if (rd8(edi + 9u) != 4u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(edi + 9u);
    COW_AT(102f1178)
            if ((uint8_t)ecx != 8u)
            {
    COW_AT(102f1194)
                if ((uint8_t)ecx == 0x10u)
                {
    COW_AT(102f1199)
                    if (edx != 0u)
                    {
                        pf = PARITY((uint8_t)edx);
                        zf = edx == 0u;
                        sf = (int32_t)edx < 0;
    COW_AT(102f11a0)
                        eax = arg2;
                        cf = 0u;
                        of = 0u;
L_102f11a4: ;
    COW_AT(102f11a4)
                        t38 = rd8(eax);
                        t39 = rd16(rd8(eax) * 2u + rd32(arg4 + (rd8(eax + 1u) >> (arg5 & 0x1fu)) * 4u));
                        t40 = rd8(eax + 1u);
                        wr8(eax, (uint8_t)(t39 >> 8u));
                        wr8(eax + 1u, (uint8_t)t39);
                        if (edx != 1u)
                        {
                            eax = eax + 2u;
                            ecx = (t38 & 0xffff0000u) | t39;
                            cf = (arg5 & 0x1fu) != 0u ? t40 >> (arg5 & 0x1fu) - 1u & 1u : cf;
                            pf = PARITY((uint8_t)(edx - 1u));
                            zf = edx == 1u;
                            sf = (int32_t)(edx - 1u) < 0;
                            of = edx == 0x80000000u;
                            edx = edx - 1u;
                            goto L_102f11a4;
                        }
                        edx = edx - 1u;
                    }
                }
            }
            else
            {
    COW_AT(102f117d)
                if (edx != 0u)
                {
    COW_AT(102f1184)
                    ecx = arg2;
                    esi = edx;
L_102f1186: ;
    COW_AT(102f1186)
                    t36 = rd8(ecx);
                    t37 = rd8(arg3 + rd8(ecx));
                    wr8(ecx, (uint8_t)t37);
                    if (esi != 1u)
                    {
                        ecx = ecx + 1u;
                        esi = esi - 1u;
                        goto L_102f1186;
                    }
                    edx = (t36 & 0xffffff00u) | t37;
    COW_AT(102f1192)
                }
            }
        }
        else
        {
    COW_AT(102f1135)
            if (edx != 0u)
            {
    COW_AT(102f1140)
                esi = arg2;
                edi = ((edx - 1u) >> 1u) + 1u;
L_102f1146: ;
    COW_AT(102f1146)
                t32 = rd8(esi) & 0xf0u;
                t33 = rd8(esi) & 0xfu;
                t34 = rd8(arg3 + ((uint32_t)((int32_t)t32 >> 4u) | t32));
                t35 = rd8(arg3 + (t33 << 4u | t33));
                wr8(esi, (uint8_t)((t34 & 0xf0u) | t35 >> 4u));
                if (edi != 1u)
                {
                    esi = esi + 1u;
                    edi = edi - 1u;
                    goto L_102f1146;
                }
                edx = (t32 & 0xffffff00u) | (t34 & 0xf0u) | t35 >> 4u;
    COW_AT(102f1176)
            }
        }
    }
    else
    {
        ebx = rd8(edi + 8u);
    COW_AT(102f0eb8)
        if (ebx == 2u)
        {
    COW_AT(102f0fc6)
            if ((uint8_t)ecx != 8u)
            {
    COW_AT(102f0ffb)
                if (edx != 0u)
                {
                    pf = PARITY((uint8_t)edx);
                    zf = edx == 0u;
                    sf = (int32_t)edx < 0;
    COW_AT(102f1006)
                    wr32(sp0 + 4u, edx);
                    eax = arg2;
                    cf = 0u;
                    of = 0u;
L_102f100d: ;
    COW_AT(102f100d)
                    t18 = rd8(eax);
                    t19 = rd16(rd8(eax) * 2u + rd32(arg4 + (rd8(eax + 1u) >> (arg5 & 0x1fu)) * 4u));
                    wr8(eax + 1u, (uint8_t)t19);
                    wr8(eax, (uint8_t)(t19 >> 8u));
                    t20 = rd8(eax + 2u);
                    t21 = rd16(rd8(eax + 2u) * 2u + rd32(arg4 + (rd8(eax + 3u) >> (arg5 & 0x1fu)) * 4u));
                    wr8(eax + 3u, (uint8_t)t21);
                    wr8(eax + 2u, (uint8_t)(t21 >> 8u));
                    t22 = rd8(eax + 4u);
                    t23 = rd16(rd8(eax + 4u) * 2u + rd32(arg4 + (rd8(eax + 5u) >> (arg5 & 0x1fu)) * 4u));
                    t24 = rd32(arg4 + (rd8(eax + 5u) >> (arg5 & 0x1fu)) * 4u);
                    wr8(eax + 4u, (uint8_t)(t23 >> 8u));
                    wr8(eax + 5u, (uint8_t)t23);
                    t25 = rd32(sp0 + 4u);
                    wr32(sp0 + 4u, t25 - 1u);
                    if (t25 != 1u)
                    {
                        ecx = (t22 & 0xffff0000u) | t23;
                        cf = eax + 6u < eax + 4u;
                        eax = eax + 6u;
                        pf = PARITY((uint8_t)(t25 - 1u));
                        zf = t25 == 1u;
                        sf = (int32_t)(t25 - 1u) < 0;
                        of = t25 == 0x80000000u;
                        goto L_102f100d;
                    }
                    edx = t24;
    COW_AT(102f105d)
                }
            }
            else
            {
    COW_AT(102f0fcb)
                if (edx != 0u)
                {
    COW_AT(102f0fd6)
                    ecx = arg2;
                    esi = edx;
L_102f0fd8: ;
    COW_AT(102f0fd8)
                    wr8(ecx, rd8(arg3 + rd8(ecx)));
                    wr8(ecx + 1u, rd8(arg3 + rd8(ecx + 1u)));
                    t16 = rd8(ecx + 2u);
                    t17 = rd8(arg3 + rd8(ecx + 2u));
                    wr8(ecx + 2u, (uint8_t)t17);
                    if (esi != 1u)
                    {
                        ecx = ecx + 3u;
                        esi = esi - 1u;
                        goto L_102f0fd8;
                    }
                    edx = (t16 & 0xffffff00u) | t17;
    COW_AT(102f0ff6)
                }
            }
        }
        else
        {
            ebx = ebx - 2u;
    COW_AT(102f0ec3)
            if (ebx == 2u)
            {
    COW_AT(102f0f71)
                if ((uint8_t)ecx != 8u)
                {
    COW_AT(102f0f95)
                    if (edx != 0u)
                    {
                        pf = PARITY((uint8_t)edx);
                        zf = edx == 0u;
                        sf = (int32_t)edx < 0;
    COW_AT(102f0fa0)
                        eax = arg2;
                        cf = 0u;
                        of = 0u;
L_102f0fa4: ;
    COW_AT(102f0fa4)
                        t14 = rd8(eax);
                        t15 = rd16(rd8(eax) * 2u + rd32(arg4 + (rd8(eax + 1u) >> (arg5 & 0x1fu)) * 4u));
                        wr8(eax, (uint8_t)(t15 >> 8u));
                        wr8(eax + 1u, (uint8_t)t15);
                        if (edx != 1u)
                        {
                            ecx = (t14 & 0xffff0000u) | t15;
                            cf = eax + 4u < eax;
                            eax = eax + 4u;
                            pf = PARITY((uint8_t)(edx - 1u));
                            zf = edx == 1u;
                            sf = (int32_t)(edx - 1u) < 0;
                            of = edx == 0x80000000u;
                            edx = edx - 1u;
                            goto L_102f0fa4;
                        }
                        edx = edx - 1u;
    COW_AT(102f0fc1)
                    }
                }
                else
                {
    COW_AT(102f0f76)
                    if (edx != 0u)
                    {
    COW_AT(102f0f81)
                        ecx = arg2;
                        esi = edx;
L_102f0f83: ;
    COW_AT(102f0f83)
                        t12 = rd8(ecx);
                        t13 = rd8(arg3 + rd8(ecx));
                        wr8(ecx, (uint8_t)t13);
                        if (esi != 1u)
                        {
                            ecx = ecx + 2u;
                            esi = esi - 1u;
                            goto L_102f0f83;
                        }
                        edx = (t12 & 0xffffff00u) | t13;
    COW_AT(102f0f90)
                    }
                }
            }
            else
            {
                ebx = ebx - 2u;
    COW_AT(102f0ecb)
                if (ebx == 2u)
                {
    COW_AT(102f0ed3)
                    if ((uint8_t)ecx != 8u)
                    {
    COW_AT(102f0f09)
                        if (edx != 0u)
                        {
                            pf = PARITY((uint8_t)edx);
                            zf = edx == 0u;
                            sf = (int32_t)edx < 0;
    COW_AT(102f0f14)
                            wr32(sp0 + 4u, edx);
                            eax = arg2;
                            cf = 0u;
                            of = 0u;
L_102f0f1b: ;
    COW_AT(102f0f1b)
                            t4 = rd8(eax);
                            t5 = rd16(rd8(eax) * 2u + rd32(arg4 + (rd8(eax + 1u) >> (arg5 & 0x1fu)) * 4u));
                            wr8(eax + 1u, (uint8_t)t5);
                            wr8(eax, (uint8_t)(t5 >> 8u));
                            t6 = rd8(eax + 2u);
                            t7 = rd16(rd8(eax + 2u) * 2u + rd32(arg4 + (rd8(eax + 3u) >> (arg5 & 0x1fu)) * 4u));
                            wr8(eax + 3u, (uint8_t)t7);
                            wr8(eax + 2u, (uint8_t)(t7 >> 8u));
                            t8 = rd8(eax + 4u);
                            t9 = rd16(rd8(eax + 4u) * 2u + rd32(arg4 + (rd8(eax + 5u) >> (arg5 & 0x1fu)) * 4u));
                            t10 = rd32(arg4 + (rd8(eax + 5u) >> (arg5 & 0x1fu)) * 4u);
                            wr8(eax + 4u, (uint8_t)(t9 >> 8u));
                            wr8(eax + 5u, (uint8_t)t9);
                            t11 = rd32(sp0 + 4u);
                            wr32(sp0 + 4u, t11 - 1u);
                            if (t11 != 1u)
                            {
                                ecx = (t8 & 0xffff0000u) | t9;
                                cf = eax + 8u < eax + 4u;
                                eax = eax + 8u;
                                pf = PARITY((uint8_t)(t11 - 1u));
                                zf = t11 == 1u;
                                sf = (int32_t)(t11 - 1u) < 0;
                                of = t11 == 0x80000000u;
                                goto L_102f0f1b;
                            }
                            edx = t10;
    COW_AT(102f0f6c)
                        }
                    }
                    else
                    {
    COW_AT(102f0ed8)
                        if (edx != 0u)
                        {
    COW_AT(102f0ee3)
                            ecx = arg2;
                            esi = edx;
L_102f0ee5: ;
    COW_AT(102f0ee5)
                            wr8(ecx, rd8(arg3 + rd8(ecx)));
                            wr8(ecx + 1u, rd8(arg3 + rd8(ecx + 1u)));
                            t2 = rd8(ecx + 2u);
                            t3 = rd8(arg3 + rd8(ecx + 2u));
                            wr8(ecx + 2u, (uint8_t)t3);
                            if (esi != 1u)
                            {
                                ecx = ecx + 4u;
                                esi = esi - 1u;
                                goto L_102f0ee5;
                            }
                            edx = (t2 & 0xffffff00u) | t3;
    COW_AT(102f0f04)
                        }
                    }
                }
            }
        }
    }
    COW_AT(102f11c0)
L_102f11c1: ;
    COW_AT(102f11c1)
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f0e77(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f0e95u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f0e99u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f0ea2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f0eaau:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f0eb8u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f0ec3u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f0ecbu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f0ed3u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f0ed8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f0ee3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f0ee5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f0f04u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f0f09u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f0f14u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        g->edi = 2u;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x102f0f1bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = (uint8_t)arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f0f6cu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f0f71u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f0f76u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f0f81u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f0f83u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f0f90u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f0f95u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f0fa0u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x102f0fa4u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = (uint8_t)arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f0fc1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f0fc6u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f0fcbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f0fd6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f0fd8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f0ff6u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f0ffbu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f1006u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        g->edi = 2u;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x102f100du:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = (uint8_t)arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x102f105du:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1062u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f106bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f1079u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        wr32(sp0 - 8u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102f1083u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f1127u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f112du:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f1135u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1140u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102f1146u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1176u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1178u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f117du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1184u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ecx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1186u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1192u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f1194u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f1199u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f11a0u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x102f11a4u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebx = (uint8_t)arg5;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102f11c0u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f11c1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f0e77(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102f0e77(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
