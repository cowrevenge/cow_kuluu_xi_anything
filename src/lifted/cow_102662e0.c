/* f_0x102662e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u64 stack_args=8 */
uint32_t cow_fn_102662e0(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_2c;
    uint32_t loc_30;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102662f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102662f3;
    case 0x102662f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102662f5;
    case 0x102662f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102662f9;
    case 0x10266301u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266301;
    case 0x10266310u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266310;
    case 0x1026631cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026631c;
    case 0x1026631eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026631e;
    case 0x10266322u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266322;
    case 0x1026632cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026632c;
    case 0x1026633fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026633f;
    case 0x10266347u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266347;
    case 0x10266349u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266349;
    case 0x10266351u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266351;
    case 0x10266357u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266357;
    case 0x10266362u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266362;
    case 0x1026636eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026636e;
    case 0x10266370u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266370;
    case 0x10266374u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266374;
    case 0x1026637bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026637b;
    case 0x1026637du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026637d;
    case 0x10266381u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266381;
    case 0x10266383u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266383;
    case 0x10266387u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266387;
    case 0x1026638eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026638e;
    case 0x10266390u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266390;
    case 0x10266412u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266412;
    case 0x1026641au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026641a;
    case 0x1026642du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026642d;
    case 0x1026642fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026642f;
    case 0x10266433u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266433;
    case 0x10266438u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266438;
    case 0x10266442u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266442;
    case 0x10266444u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266444;
    case 0x10266448u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266448;
    case 0x1026644du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026644d;
    case 0x1026644fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026644f;
    case 0x1026648fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026648f;
    case 0x102664b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102664b2;
    case 0x102664b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102664b9;
    case 0x102664bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102664bb;
    case 0x102664c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102664c1;
    case 0x102664c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102664c9;
    case 0x102664cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102664cb;
    case 0x102664d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102664d3;
    case 0x102664e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102664e2;
    case 0x102664eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102664ea;
    case 0x102664ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102664ec;
    case 0x102664f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102664f4;
    case 0x102664fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102664fc;
    case 0x1026650du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026650d;
    case 0x1026651fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026651f;
    case 0x10266523u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266523;
    case 0x10266529u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266529;
    case 0x1026653eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026653e;
    case 0x1026654fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026654f;
    case 0x10266553u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266553;
    case 0x1026658au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026658a;
    case 0x10266591u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266591;
    case 0x1026659fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_1026659f;
    case 0x102665abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102665ab;
    case 0x102665bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102665bb;
    case 0x102665bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102665bc;
    case 0x102665cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102665ca;
    case 0x102665ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102665cc;
    case 0x102665d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102665d2;
    case 0x102665e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102665e4;
    case 0x102665efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102665ef;
    case 0x102665f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102665f7;
    case 0x102665feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102665fe;
    case 0x10266600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_10266600;
    default: break;
    }
#endif

    COW_AT(102662e0)
    if ((int32_t)arg2 < 0)
    {
        ebp = rd32(sp0 + 4u);
        goto L_10266301;
    }
    ebp = rd32(sp0 + 4u);
    COW_AT(102662f3)
    if (arg2 != 0u && (int32_t)arg2 >= 0) goto L_102662f9;
    COW_AT(102662f5)
    if (0u) goto L_10266301;
L_102662f9: ;
    COW_AT(102662f9)
    ebx = ebp;
    loc_24 = arg2;
L_10266310: ;
    COW_AT(10266310)
    if ((int32_t)rd32(sp0 + 0x10u) < 0)
    {
        edx = rd32(sp0 + 0x10u);
        esi = rd32(sp0 + 0xcu);
        goto L_1026632c;
    }
    edx = rd32(sp0 + 0x10u);
    esi = rd32(sp0 + 0xcu);
    zf = rd32(sp0 + 0x10u) == 0u;
    sf = (int32_t)rd32(sp0 + 0x10u) < 0;
    COW_AT(1026631c)
    if (!zf && !sf) goto L_10266322;
    COW_AT(1026631e)
    if (0u) goto L_1026632c;
L_10266322: ;
    COW_AT(10266322)
    loc_30 = esi;
    loc_2c = edx;
L_1026633f: ;
    COW_AT(1026633f)
    if ((int32_t)arg6 < 0) goto L_10266357;
    COW_AT(10266347)
    if (arg6 != 0u && (int32_t)arg6 >= 0) goto L_10266351;
    COW_AT(10266349)
    if (0u) goto L_10266357;
L_10266351: ;
    COW_AT(10266351)
    eax = arg6;
    ecx = rd32(sp0 + 0x14u);
L_10266362: ;
    COW_AT(10266362)
    wr32(sp0 + 0xcu, ecx);
    wr32(sp0 + 0x10u, eax);
    if ((int32_t)arg2 > 0) goto L_1026637b;
    COW_AT(1026636e)
    if ((int32_t)arg2 < 0) goto L_10266374;
    COW_AT(10266370)
    if (1u) goto L_1026637b;
L_10266374: ;
    COW_AT(10266374)
    ecx = 1u;
L_1026637d: ;
    COW_AT(1026637d)
    if ((int32_t)edx > 0) goto L_1026638e;
    sf = (int32_t)edx < 0;
    COW_AT(10266381)
    if (sf) goto L_10266387;
    COW_AT(10266383)
    if (1u) goto L_1026638e;
L_10266387: ;
    COW_AT(10266387)
    eax = 1u;
L_10266390: ;
    COW_AT(10266390)
    wr32(sp0 + 4u, eax ^ ecx);
    g->eax = eax ^ ecx;
    g->ecx = ecx;
    g->edx = loc_30;
    g->esp = sp0 - 0x40u;
    t3 = cow_stdcall(g, COW_IMG(0x10315c20u), 4, ebx, 0u, loc_30, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    g->eax = loc_2c;
    g->edx = t5;
    t6 = cow_stdcall(g, COW_IMG(0x10315c20u), 4, loc_2c, 0u, ebx, 0u);
    t7 = g->edx;
    g->edx = loc_24;
    t8 = cow_stdcall(g, COW_IMG(0x10315c20u), 4, loc_24, 0u, loc_30, 0u);
    t9 = g->edx;
    g->eax = loc_2c;
    g->edx = 0u;
    t10 = cow_stdcall(g, COW_IMG(0x10315c20u), 4, loc_2c, 0u, loc_24, 0u);
    t11 = g->edx;
    t12 = rd32(sp0 + 0x1cu);
    if ((t12 | rd32(sp0 + 0x20u)) == 0u)
    {
        edx = t11 + (t10 + t7 + t9 + (t6 + t8 < t6) + (t5 + t6 + t8 < t6 + t8) < t10);
        ebp = t3;
        esi = t10 + t7 + t9 + (t6 + t8 < t6) + (t5 + t6 + t8 < t6 + t8);
        edi = t5 + t6 + t8;
    }
    else
    {
        ecx = rd32(sp0 + 0x20u);
        edx = t11 + (t10 + t7 + t9 + (t6 + t8 < t6) + (t5 + t6 + t8 < t6 + t8) < t10);
        ebx = t12;
        ebp = t3;
        esi = t10 + t7 + t9 + (t6 + t8 < t6) + (t5 + t6 + t8 < t6 + t8);
        edi = t5 + t6 + t8;
    COW_AT(10266412)
        if (rd32(sp0 + 4u) == 0u) goto L_10266438;
    COW_AT(1026641a)
        if ((int32_t)ecx < 0)
        {
            eax = -(ecx + (ebx != 0u));
            loc_20 = -ebx;
            goto L_1026644d;
        }
        eax = -(ecx + (ebx != 0u));
        zf = ecx == 0u;
        sf = (int32_t)ecx < 0;
        loc_20 = -ebx;
    COW_AT(1026642d)
        if (!zf && !sf) goto L_10266433;
    COW_AT(1026642f)
        if (ebx == 0u) goto L_1026644d;
L_10266433: ;
    COW_AT(10266433)
        ecx = 0xffffffffu;
L_1026644f: ;
    COW_AT(1026644f)
        wr32(sp0 + 0x20u, 0u);
        t13 = ebp + loc_20 < ebp;
        wr32(sp0 + 0x1cu, t13);
        t14 = ecx + edx + (ecx + esi + (eax + edi < eax) + (eax + edi + rd32(sp0 + 0x1cu) < rd32(sp0 + 0x1cu)) < esi) + (ecx + (eax + edi < eax) + (eax + edi + rd32(sp0 + 0x1cu) < rd32(sp0 + 0x1cu)) < (eax + edi < eax) + (eax + edi + rd32(sp0 + 0x1cu) < rd32(sp0 + 0x1cu)));
        if ((int32_t)t14 >= 0)
        {
            edx = t14;
            ebp = ebp + loc_20;
            esi = ecx + esi + (eax + edi < eax) + (eax + edi + rd32(sp0 + 0x1cu) < rd32(sp0 + 0x1cu));
            edi = eax + edi + rd32(sp0 + 0x1cu);
        }
        else
        {
            edx = t14;
            ebp = ebp + loc_20;
            esi = ecx + esi + (eax + edi < eax) + (eax + edi + rd32(sp0 + 0x1cu) < rd32(sp0 + 0x1cu));
            edi = eax + edi + rd32(sp0 + 0x1cu);
    COW_AT(1026648f)
            t15 = rd32(sp0 + 4u) == 0u;
            wr32(sp0 + 4u, t15);
            t16 = ~ebp + 1u;
            if ((t16 | ~edi + (~ebp + 1u < ~ebp)) != 0u)
            {
                edx = ~edx;
                esi = ~esi;
                edi = ~edi + (~ebp + 1u < ~ebp);
                ebp = t16;
    COW_AT(102664b9)
                eax = 0u;
            }
            else
            {
                edx = ~edx;
                esi = ~esi;
                edi = ~edi + (~ebp + 1u < ~ebp);
                ebp = t16;
    COW_AT(102664b2)
                eax = 1u;
            }
    COW_AT(102664bb)
            edx = edx + (eax + esi < esi);
            esi = eax + esi;
        }
    }
    COW_AT(102664c1)
    if ((int32_t)arg6 <= 0)
    {
    COW_AT(102664c9)
        if ((int32_t)arg6 < 0) goto L_102664d3;
    COW_AT(102664cb)
        if (1u) goto L_102664e2;
L_102664d3: ;
    COW_AT(102664d3)
        t17 = rd32(sp0 + 4u) == 0u;
        wr32(sp0 + 4u, t17);
    }
L_102664e2: ;
    COW_AT(102664e2)
    if (rd32(sp0 + 0x10u) > edx)
    {
        eax = rd32(sp0 + 0x10u);
        goto L_1026651f;
    }
    eax = rd32(sp0 + 0x10u);
    cf = rd32(sp0 + 0x10u) < edx;
    COW_AT(102664ea)
    if (cf) goto L_102664f4;
    COW_AT(102664ec)
    if (rd32(sp0 + 0xcu) > esi)
    {
        ecx = rd32(sp0 + 0xcu);
        goto L_10266523;
    }
L_102664f4: ;
    COW_AT(102664f4)
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = rd32(sp0 + 4u);
        goto L_1026650d;
    }
    COW_AT(102664fc)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = 0x80000000u;
    return 0u;
L_10266301: ;
    COW_AT(10266301)
    t1 = -(arg2 + (ebp != 0u));
    ebx = -ebp;
    loc_24 = t1;
    goto L_10266310;
L_1026632c: ;
    COW_AT(1026632c)
    t2 = -(edx + (esi != 0u));
    loc_30 = -esi;
    loc_2c = t2;
    goto L_1026633f;
L_10266357: ;
    COW_AT(10266357)
    eax = -(arg6 + (rd32(sp0 + 0x14u) != 0u));
    ecx = -rd32(sp0 + 0x14u);
    goto L_10266362;
L_1026637b: ;
    COW_AT(1026637b)
    ecx = 0u;
    goto L_1026637d;
L_1026638e: ;
    COW_AT(1026638e)
    eax = 0u;
    goto L_10266390;
L_10266438: ;
    COW_AT(10266438)
    if ((int32_t)ecx > 0)
    {
        eax = ecx;
        loc_20 = ebx;
        goto L_1026644d;
    }
    eax = ecx;
    sf = (int32_t)ecx < 0;
    loc_20 = ebx;
    COW_AT(10266442)
    if (sf) goto L_10266448;
    COW_AT(10266444)
    if (1u) goto L_1026644d;
L_10266448: ;
    COW_AT(10266448)
    ecx = 0xffffffffu;
    goto L_1026644f;
L_1026644d: ;
    COW_AT(1026644d)
    ecx = 0u;
    goto L_1026644f;
L_1026650d: ;
    COW_AT(1026650d)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = 0x7fffffffu;
    return 0xffffffffu;
L_1026651f: ;
    COW_AT(1026651f)
    ecx = rd32(sp0 + 0xcu);
L_10266523: ;
    COW_AT(10266523)
    if ((esi | edx) != 0u) goto L_1026654f;
    COW_AT(10266529)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t18 = cow_stdcall(g, COW_IMG(0x10316970u), 4, ebp, edi, ecx, eax);
    t19 = g->edx;
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = t18;
        edx = t19;
        goto L_10266600;
    }
    eax = t18;
    edx = t19;
    COW_AT(1026653e)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = -(edx + (eax != 0u));
    return -eax;
L_1026654f: ;
    COW_AT(1026654f)
    if (eax != 0u) goto L_1026659f;
    COW_AT(10266553)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40u;
    t20 = cow_stdcall(g, COW_IMG(0x10316970u), 4, edi, esi, ecx, eax);
    t21 = g->edx;
    t22 = rd32(sp0 + 0xcu);
    g->eax = 0u;
    t23 = cow_stdcall(g, COW_IMG(0x103168f0u), 4, edi, esi, t22, 0u);
    t24 = rd32(sp0 + 0xcu);
    g->edx = t24;
    t25 = cow_stdcall(g, COW_IMG(0x10316970u), 4, ebp, t23, t24, 0u);
    t26 = g->edx;
    if (rd32(sp0 + 4u) == 0u)
    {
        ebx = t20 + t26;
        esi = t25;
    }
    else
    {
        ebx = t20 + t26;
        esi = t25;
    COW_AT(1026658a)
        ebx = -(ebx + (esi != 0u));
        esi = -esi;
    }
    COW_AT(10266591)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = ebx;
    return esi;
L_1026659f: ;
    COW_AT(1026659f)
    wr32(sp0 + 0x14u, 0x40u);
    eax = 0u;
    ecx = 0u;
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
L_102665ab: ;
    COW_AT(102665ab)
    { /* shld ecx, eax, 1 */ { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = ecx, b = eax, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); ecx = (uint32_t)(r); } } }
    { /* shld edx, esi, 1 */ { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = edx, b = esi, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edx = (uint32_t)(r); } } }
    if ((int32_t)edi >= 0)
    {
        eax = eax * 2u;
        esi = esi * 2u;
        pf = PARITY((uint8_t)edi);
        zf = edi == 0u;
        sf = (int32_t)edi < 0;
        of = 0u;
    }
    else
    {
        eax = eax * 2u;
        esi = esi * 2u;
    COW_AT(102665bb)
        pf = PARITY((uint8_t)(esi + 1u));
        zf = esi + 1u == 0u;
        sf = (int32_t)(esi + 1u) < 0;
        of = esi + 1u == 0x80000000u;
        esi = esi + 1u;
    }
    COW_AT(102665bc)
    t27 = rd32(sp0 + 0x10u);
    cf = 0u;
    { /* shld edi, ebp, 1 */ { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = edi, b = ebp, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edi = (uint32_t)(r); } } }
    if (t27 > edx)
    {
        ebp = ebp * 2u;
        cf = t27 < edx;
    }
    else
    {
        ebp = ebp * 2u;
        cf = t27 < edx;
    COW_AT(102665ca)
        if (cf) goto L_102665d2;
    COW_AT(102665cc)
        if (rd32(sp0 + 0xcu) > esi)
        {
            cf = rd32(sp0 + 0xcu) < esi;
            goto L_102665e4;
        }
L_102665d2: ;
    COW_AT(102665d2)
        edx = edx - rd32(sp0 + 0x10u) - (esi < rd32(sp0 + 0xcu));
        esi = esi - rd32(sp0 + 0xcu);
        cf = ecx + (eax + 1u < eax) < ecx || eax + 1u < eax && ecx + (eax + 1u < eax) == ecx;
        ecx = ecx + (eax + 1u < eax);
        eax = eax + 1u;
    }
L_102665e4: ;
    COW_AT(102665e4)
    t28 = rd32(sp0 + 0x14u) - 1u;
    t29 = rd32(sp0 + 0x14u);
    wr32(sp0 + 0x14u, t28);
    if (t29 != 1u)
    {
        pf = PARITY((uint8_t)(t29 - 1u));
        zf = t29 == 1u;
        sf = (int32_t)(t29 - 1u) < 0;
        of = t29 == 0x80000000u;
        goto L_102665ab;
    }
    COW_AT(102665ef)
    if (rd32(sp0 + 4u) != 0u)
    {
    COW_AT(102665f7)
        ecx = -(ecx + (eax != 0u));
        eax = -eax;
    }
    COW_AT(102665fe)
    edx = ecx;
L_10266600: ;
    COW_AT(10266600)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102662e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102662f3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned pf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        g->edi = arg2;
        g->zf = (uint8_t)(arg2 == 0u);
        g->sf = (uint8_t)((int32_t)arg2 < 0);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x102662f5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102662f9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10266301u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x40u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10266310u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1026631cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->edi = arg2;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x1026631eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10266322u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1026632cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1026633fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10266347u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned pf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->eax = arg6;
        g->edi = arg2;
        g->zf = (uint8_t)(arg6 == 0u);
        g->sf = (uint8_t)((int32_t)arg6 < 0);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x10266349u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->eax = arg6;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10266351u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->eax = arg6;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10266357u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->eax = arg6;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10266362u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1026636eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
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
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned pf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->sf = (uint8_t)((int32_t)arg2 < 0);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x10266370u:
    {
        unsigned cf;
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
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266374u:
    {
        unsigned cf;
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
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026637bu:
    {
        unsigned cf;
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
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026637du:
    {
        unsigned cf;
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
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266381u:
    {
        unsigned cf;
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
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x10266383u:
    {
        unsigned cf;
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
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266387u:
    {
        unsigned cf;
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
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026638eu:
    {
        unsigned cf;
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
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266390u:
    {
        unsigned cf;
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
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266412u:
    {
        unsigned cf;
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
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026641au:
    {
        unsigned cf;
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
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026642du:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x1026642fu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266433u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266438u:
    {
        unsigned cf;
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
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266442u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x10266444u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266448u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026644du:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026644fu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026648fu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102664b2u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102664b9u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102664bbu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102664c1u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102664c9u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned pf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->sf = (uint8_t)((int32_t)arg6 < 0);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x102664cbu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102664d3u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102664e2u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102664eau:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102664ecu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102664f4u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102664fcu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026650du:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026651fu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266523u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266529u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026653eu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026654fu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266553u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026658au:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266591u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1026659fu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102665abu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102665bbu:
    {
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->cf = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x102665bcu:
    {
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        g->cf = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x102665cau:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102665ccu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102665d2u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102665e4u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102665efu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102665f7u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102665feu:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x10266600u:
    {
        unsigned cf;
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
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102662e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102662e0(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
