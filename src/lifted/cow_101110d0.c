/* f_0x101110d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101110d0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_c;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101110efu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_101110ef;
    case 0x10111105u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_10111105;
    case 0x10111115u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; goto E_10111115;
    case 0x10111130u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; goto E_10111130;
    case 0x10111133u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; cf = g->cf; goto E_10111133;
    case 0x10111146u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; goto E_10111146;
    case 0x10111156u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; cf = g->cf; goto E_10111156;
    case 0x1011116cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_1011116c;
    case 0x1011117eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_1011117e;
    case 0x10111192u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_10111192;
    case 0x1011119eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_1011119e;
    case 0x101111b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; cf = g->cf; goto E_101111b5;
    case 0x101111cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; cf = g->cf; goto E_101111cb;
    case 0x101111d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; cf = g->cf; goto E_101111d0;
    case 0x101111d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; cf = g->cf; goto E_101111d2;
    case 0x101111ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); goto E_101111dd;
    case 0x101111e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); goto E_101111e7;
    case 0x101111ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); goto E_101111ec;
    case 0x101111f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); goto E_101111f1;
    case 0x10111200u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); goto E_10111200;
    case 0x10111204u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); goto E_10111204;
    case 0x1011120eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); goto E_1011120e;
    case 0x10111216u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); goto E_10111216;
    case 0x1011121eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); goto E_1011121e;
    case 0x10111221u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); goto E_10111221;
    case 0x10111225u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); goto E_10111225;
    case 0x1011122bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; loc_18 = rd32(sp0 - 0x18u); goto E_1011122b;
    case 0x1011124eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_1011124e;
    case 0x10111253u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_10111253;
    case 0x10111255u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_10111255;
    case 0x10111260u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_10111260;
    case 0x1011126au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_1011126a;
    case 0x1011126fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_1011126f;
    case 0x10111274u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_10111274;
    case 0x10111283u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_10111283;
    case 0x10111287u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_10111287;
    case 0x10111291u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_10111291;
    case 0x10111299u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_10111299;
    case 0x101112a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_101112a1;
    case 0x101112a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_101112a4;
    case 0x101112a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_101112a8;
    case 0x101112aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_101112ae;
    case 0x101112c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_101112c4;
    case 0x101112d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_101112d2;
    case 0x101112deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_101112de;
    case 0x101112eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101112ee;
    case 0x101112fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101112fa;
    case 0x10111301u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111301;
    case 0x1011130cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1011130c;
    case 0x10111313u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111313;
    case 0x10111320u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111320;
    case 0x1011132fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1011132f;
    case 0x10111335u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111335;
    case 0x1011133bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1011133b;
    case 0x10111345u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111345;
    case 0x10111354u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111354;
    case 0x10111356u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111356;
    case 0x1011135cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1011135c;
    case 0x10111367u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111367;
    case 0x10111376u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111376;
    case 0x10111378u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111378;
    case 0x1011137eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1011137e;
    case 0x10111385u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111385;
    case 0x1011138cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_1011138c;
    case 0x10111399u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111399;
    case 0x101113a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101113a8;
    case 0x101113aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101113ae;
    case 0x101113b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101113b3;
    case 0x101113bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101113bd;
    case 0x101113c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101113c6;
    case 0x101113c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101113c8;
    case 0x101113cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_101113cf;
    case 0x101113e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_101113e1;
    case 0x1011140cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; goto E_1011140c;
    case 0x10111416u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111416;
    case 0x10111418u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111418;
    case 0x10111428u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; goto E_10111428;
    case 0x1011143eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; loc_c = rd32(sp0 - 0xcu); goto E_1011143e;
    default: break;
    }
#endif

    COW_AT(101110d0)
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, COW_IMG(0x1036bfccu));
    wr32(sp0 - 0x24u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfccu));
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10111105;
    }
    eax = t1;
    edx = t2;
    COW_AT(101110ef)
    wr32(sp0 - 0x30u, arg2 + 8u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10109260u), self + 8u, 1, arg2 + 8u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10111105: ;
    COW_AT(10111105)
    wr32(sp0 - 0x30u, COW_IMG(0x1036bfc4u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t3 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfc4u));
    t4 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_10111146;
    }
    edx = t4;
    COW_AT(10111115)
    if ((int32_t)(uint16_t)arg3 > (int32_t)((uint8_t)arg1 + 1u))
    {
        eax = arg2 + (uint8_t)arg1 * 8u + 8u;
    }
    else
    {
    COW_AT(10111130)
        eax = arg2 + 8u;
    }
    COW_AT(10111133)
    wr32(sp0 - 0x30u, eax);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10109260u), self + 0x10u, 1, eax);
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = in_ebp;
    return 0u;
L_10111146: ;
    COW_AT(10111146)
    wr32(sp0 - 0x30u, COW_IMG(0x1036bfbcu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t5 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfbcu));
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        edx = t6;
        goto L_1011116c;
    }
    eax = t5;
    edx = t6;
    COW_AT(10111156)
    wr32(sp0 - 0x30u, arg2 + 8u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, COW_IMG(0x10109260u), self + 0x18u, 1, arg2 + 8u);
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = in_ebp;
    return 0u;
L_1011116c: ;
    COW_AT(1011116c)
    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, COW_IMG(0x1036bfb4u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t7 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfb4u));
    t8 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t8;
        goto L_10111192;
    }
    eax = t7;
    edx = t8;
    COW_AT(1011117e)
    wr32(sp0 - 0x38u, COW_IMG(0x1036bfacu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t9 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfacu));
    t10 = g->edx;
    if (t9 != 0u) goto L_1011143e;
    eax = t9;
    edx = t10;
L_10111192: ;
    COW_AT(10111192)
    if ((uint16_t)arg3 >= 2u)
    {
    COW_AT(1011119e)
        wr32(sp0 - 0x38u, 0x2eu);
        g->eax = eax;
        g->esp = sp0 - 0x34u;
        t11 = cow_fastcall(g, COW_IMG(0x10109830u), arg2 + 8u, edx, 1, 0x2eu);
        if ((int16_t)t11 > 0)
        {
            eax = t11;
            ebp = t11;
    COW_AT(101111b5)
            wr32(sp0 - 0x38u, ebp);
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->esi = arg2 + 8u;
            g->eax = eax;
            g->esp = sp0 - 0x34u;
            t12 = cow_thiscall(g, COW_IMG(0x10109430u), arg2 + 8u, 3, sp0 - 0x20u, 0u, ebp);
            if (rd32(t12 + 4u) == 0u)
            {
    COW_AT(101111d0)
                eax = 0u;
            }
            else
            {
                eax = rd32(t12 + 4u);
    COW_AT(101111cb)
                eax = rd32(eax + 4u);
            }
    COW_AT(101111d2)
            ecx = sp0 - 0x18u;
            edx = eax;
            ebx = 3u;
            esi = arg2 + 8u;
            loc_18 = rd32(sp0 - 0x18u);
L_101111dd: ;
    COW_AT(101111dd)
            wr32(ecx, 0u);
            if (edx != 0u)
            {
    COW_AT(101111e7)
                if (rd8(edx) != 0u)
                {
    COW_AT(101111ec)
                    edi = 5u;
L_101111f1: ;
    COW_AT(101111f1)
                    t13 = rd32(ecx) << 6u;
                    wr32(ecx, t13);
                    if (rd8(edx) == 0u)
                    {
                        eax = (t13 & 0xffffff00u) | rd8(edx);
                        esi = t13;
                    }
                    else
                    {
                        eax = (t13 & 0xffffff00u) | rd8(edx);
                        esi = t13;
    COW_AT(10111200)
                        if ((uint8_t)eax <= 0x60u)
                        {
    COW_AT(1011120e)
                            eax = (uint8_t)eax - 0x20u;
                        }
                        else
                        {
    COW_AT(10111204)
                            eax = (uint8_t)eax - 0x40u;
                        }
    COW_AT(10111216)
                        t14 = (eax & 0x3fu) | esi;
                        wr32(ecx, t14);
                        eax = t14;
                        edx = edx + 1u;
                    }
    COW_AT(1011121e)
                    if (edi != 1u)
                    {
                        edi = edi - 1u;
                        goto L_101111f1;
                    }
    COW_AT(10111221)
                }
            }
    COW_AT(10111225)
            if (ebx != 1u)
            {
                ecx = ecx + 4u;
                ebx = ebx - 1u;
                goto L_101111dd;
            }
    COW_AT(1011122b)
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x20u, 0);
            t15 = g->edx;
            wr32(sp0 - 0x38u, 0xffffffffu);
            wr32(sp0 - 0x3cu, ebp + 1u);
            wr32(sp0 - 0x40u, sp0 - 0x20u);
            g->esi = esi;
            g->eax = sp0 - 0x20u;
            t16 = cow_thiscall(g, COW_IMG(0x10109430u), arg2 + 8u, 3, sp0 - 0x20u, ebp + 1u, 0xffffffffu);
            if (rd32(t16 + 4u) == 0u)
            {
                ebx = ebp + 1u;
    COW_AT(10111253)
                eax = 0u;
            }
            else
            {
                eax = rd32(t16 + 4u);
                ebx = ebp + 1u;
    COW_AT(1011124e)
                eax = rd32(eax + 4u);
            }
    COW_AT(10111255)
            ecx = sp0 - 0xcu;
            edx = eax;
            ebp = 3u;
            loc_c = rd32(sp0 - 0xcu);
L_10111260: ;
    COW_AT(10111260)
            wr32(ecx, 0u);
            if (edx != 0u)
            {
    COW_AT(1011126a)
                if (rd8(edx) != 0u)
                {
    COW_AT(1011126f)
                    edi = 5u;
L_10111274: ;
    COW_AT(10111274)
                    t17 = rd32(ecx) << 6u;
                    wr32(ecx, t17);
                    if (rd8(edx) == 0u)
                    {
                        eax = (t17 & 0xffffff00u) | rd8(edx);
                    }
                    else
                    {
                        eax = (t17 & 0xffffff00u) | rd8(edx);
                        esi = t17;
    COW_AT(10111283)
                        if ((uint8_t)eax <= 0x60u)
                        {
    COW_AT(10111291)
                            eax = (uint8_t)eax - 0x20u;
                        }
                        else
                        {
    COW_AT(10111287)
                            eax = (uint8_t)eax - 0x40u;
                        }
    COW_AT(10111299)
                        t18 = (eax & 0x3fu) | esi;
                        wr32(ecx, t18);
                        eax = t18;
                        edx = edx + 1u;
                    }
    COW_AT(101112a1)
                    if (edi != 1u)
                    {
                        edi = edi - 1u;
                        goto L_10111274;
                    }
    COW_AT(101112a4)
                }
            }
    COW_AT(101112a8)
            if (ebp != 1u)
            {
                ecx = ecx + 4u;
                ebp = ebp - 1u;
                goto L_10111260;
            }
    COW_AT(101112ae)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x34u;
            t19 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x20u, 0);
            t20 = g->edx;
            wr32(sp0 - 0x38u, ebx);
            g->edx = t20;
            t21 = cow_thiscall(g, COW_IMG(0x101093f0u), arg2 + 8u, 1, ebx);
            t22 = g->edx;
            if ((uint8_t)t21 != 0x2au)
            {
                edx = t22;
                loc_c = rd32(sp0 - 0xcu);
            }
            else
            {
                edx = t22;
    COW_AT(101112c4)
                wr32(sp0 - 0xcu, 0u);
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                loc_c = 0u;
            }
    COW_AT(101112d2)
            if (rd32(sp0 - 0x18u) != 0u)
            {
                eax = rd32(sp0 - 0x18u);
    COW_AT(101112de)
                wr32(sp0 - 0x38u, COW_IMG(0x1036bfb4u));
                g->ebx = ebx;
                g->eax = eax;
                g->esp = sp0 - 0x34u;
                t23 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfb4u));
                t24 = g->ecx;
                if (t23 == 0u)
                {
                    ecx = t24;
                    goto L_101112fa;
                }
                ecx = t24;
    COW_AT(101112ee)
                if (rd32(sp0 - 0xcu) == 0u) goto L_1011143e;
L_101112fa: ;
    COW_AT(101112fa)
                edx = rd32(sp0 - 0x24u);
                ebp = rd32(rd32(sp0 - 0x24u) + 0x54u);
L_10111301: ;
    COW_AT(10111301)
                if (rd32(ebp + 4u) == 0u)
                {
                    eax = rd32(ebp + 4u);
                    goto L_101113cf;
                }
    COW_AT(1011130c)
                if (rd32(ebp + 8u) == 0u)
                {
                    ebx = rd32(ebp + 8u);
                    goto L_1011137e;
                }
                ebx = rd32(ebp + 8u);
    COW_AT(10111313)
                eax = 0u;
                esi = rd32(ebp) - (sp0 - 0x18u);
                edi = rd32(ebp);
L_10111320: ;
    COW_AT(10111320)
                if (rd32(eax * 4u + esi + sp0 - 0x18u) > rd32(eax * 4u + sp0 - 0x18u)) goto L_1011133b;
                ecx = rd32(eax * 4u + esi + sp0 - 0x18u);
                edx = rd32(eax * 4u + sp0 - 0x18u);
                cf = rd32(eax * 4u + esi + sp0 - 0x18u) < rd32(eax * 4u + sp0 - 0x18u);
    COW_AT(1011132f)
                if (cf) goto L_101113c8;
    COW_AT(10111335)
                if ((int32_t)(eax + 1u) < 3)
                {
                    eax = eax + 1u;
                    goto L_10111320;
                }
L_1011133b: ;
    COW_AT(1011133b)
                eax = 0u;
                esi = edi - (sp0 - 0x18u);
L_10111345: ;
    COW_AT(10111345)
                if (rd32(eax * 4u + esi + sp0 - 0x18u) > rd32(eax * 4u + sp0 - 0x18u))
                {
                    ecx = rd32(eax * 4u + esi + sp0 - 0x18u);
                    edx = rd32(eax * 4u + sp0 - 0x18u);
                    goto L_1011137e;
                }
                cf = rd32(eax * 4u + esi + sp0 - 0x18u) < rd32(eax * 4u + sp0 - 0x18u);
    COW_AT(10111354)
                if (cf) goto L_1011135c;
    COW_AT(10111356)
                if ((int32_t)(eax + 1u) < 3)
                {
                    eax = eax + 1u;
                    goto L_10111345;
                }
L_1011135c: ;
    COW_AT(1011135c)
                eax = 0u;
                esi = edi + 0xcu - (sp0 - 0xcu);
L_10111367: ;
    COW_AT(10111367)
                if (rd32(eax * 4u + esi + sp0 - 0xcu) > rd32(eax * 4u + sp0 - 0xcu))
                {
                    ecx = rd32(eax * 4u + esi + sp0 - 0xcu);
                    edx = rd32(eax * 4u + sp0 - 0xcu);
                    goto L_1011137e;
                }
                ecx = rd32(eax * 4u + esi + sp0 - 0xcu);
                edx = rd32(eax * 4u + sp0 - 0xcu);
                cf = rd32(eax * 4u + esi + sp0 - 0xcu) < rd32(eax * 4u + sp0 - 0xcu);
    COW_AT(10111376)
                if (cf) goto L_101113c8;
    COW_AT(10111378)
                if ((int32_t)(eax + 1u) < 3)
                {
                    eax = eax + 1u;
                    goto L_10111367;
                }
L_1011137e: ;
    COW_AT(1011137e)
                if (rd32(ebp + 4u) == 0u)
                {
                    eax = rd32(ebp + 4u);
                    goto L_101113cf;
                }
    COW_AT(10111385)
                if (rd32(ebp + 8u) == 0u)
                {
                    eax = rd32(ebp + 8u);
                    goto L_101113cf;
                }
    COW_AT(1011138c)
                eax = 0u;
                ecx = rd32(ebp) - (sp0 - 0x18u);
                esi = rd32(ebp);
L_10111399: ;
    COW_AT(10111399)
                if (rd32(eax * 4u + ecx + sp0 - 0x18u) != rd32(eax * 4u + sp0 - 0x18u))
                {
                    edx = rd32(eax * 4u + ecx + sp0 - 0x18u);
                    goto L_101113cf;
                }
    COW_AT(101113a8)
                if ((int32_t)(eax + 1u) < 3)
                {
                    eax = eax + 1u;
                    goto L_10111399;
                }
    COW_AT(101113ae)
                eax = 0u;
                ecx = esi + 0xcu;
L_101113b3: ;
    COW_AT(101113b3)
                if (rd32(ecx) != rd32(eax * 4u + sp0 - 0xcu))
                {
                    edx = rd32(ecx);
                    goto L_101113cf;
                }
                edx = rd32(ecx);
    COW_AT(101113bd)
                if ((int32_t)(eax + 1u) < 3)
                {
                    eax = eax + 1u;
                    ecx = ecx + 4u;
                    goto L_101113b3;
                }
                eax = eax + 1u;
    COW_AT(101113c6)
L_10111428: ;
    COW_AT(10111428)
                wr32(sp0 - 0x38u, COW_IMG(0x1036bfb4u));
                g->ebx = ebx;
                g->eax = eax;
                g->esp = sp0 - 0x34u;
                t35 = cow_thiscall(g, COW_IMG(0x10109570u), arg2, 1, COW_IMG(0x1036bfb4u));
                wr8(esi + 0x18u, t35 == 0u);
            }
        }
    }
L_1011143e: ;
    COW_AT(1011143e)
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x34u);
    return 0u;
L_101113c8: ;
    COW_AT(101113c8)
    ebp = ebx;
    goto L_10111301;
L_101113cf: ;
    COW_AT(101113cf)
    wr32(sp0 - 0x38u, 0x1cu);
    g->eax = eax;
    g->esp = sp0 - 0x2cu;
    t25 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1cu, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
    t26 = g->edx;
    if (t25 == 0u) goto L_1011143e;
    eax = t25;
    edx = t26;
    esi = t25;
    COW_AT(101113e1)
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t27 = cow_thiscall(g, COW_IMG(0x1010e040u), esi, 1, sp0 - 0x18u);
    wr32(sp0 - 0x38u, sp0 - 0xcu);
    g->edx = sp0 - 0xcu;
    t28 = cow_thiscall(g, COW_IMG(0x1010e040u), esi + 0xcu, 1, sp0 - 0xcu);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x38u, 0xcu);
    wr8(esi + 0x18u, 1u);
    t31 = cow_call_regs(g, COW_IMG(0x101085e0u), g->eax, g->ecx, t30, 1, 1, 0xcu);
    t32 = g->edx;
    if (t31 == 0u)
    {
        edx = t32;
    COW_AT(10111416)
        eax = 0u;
    }
    else
    {
        eax = t31;
        edx = t32;
    COW_AT(1011140c)
        wr32(eax, esi);
        wr32(eax + 8u, 0u);
        wr32(eax + 4u, 0u);
    }
    COW_AT(10111418)
    wr32(sp0 - 0x38u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, COW_IMG(0x10112190u), eax, 1, ebp);
    t33 = g->edx;
    t34 = rd32(sp0 - 0x24u);
    wr16(t34 + 0x4au, (uint16_t)(rd16(t34 + 0x4au) + 1u));
    eax = t34;
    edx = t33;
    goto L_10111428;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101110d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101110efu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10111105u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x2cu;
        g->edi = arg2;
        wr32(sp0 - 0x24u, self);
        (void)sp0;
        return 1;
    }
    case 0x10111115u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x2cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10111130u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x2cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10111133u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10111146u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x2cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10111156u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x2cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011116cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x2cu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011117eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10111192u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1011119eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101111b5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        cf = g->cf;
        g->esp = sp0 - 0x34u;
        g->esi = arg2 + 8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101111cbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        cf = g->cf;
        g->esp = sp0 - 0x34u;
        g->esi = arg2 + 8u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101111d0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        cf = g->cf;
        g->esp = sp0 - 0x34u;
        g->esi = arg2 + 8u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101111d2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        cf = g->cf;
        g->esp = sp0 - 0x34u;
        g->esi = arg2 + 8u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101111ddu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101111e7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101111ecu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101111f1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111200u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111204u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011120eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111216u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011121eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111221u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111225u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011122bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011124eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111253u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111255u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111260u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011126au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011126fu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111274u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111283u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111287u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111291u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111299u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101112a1u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101112a4u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101112a8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101112aeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101112c4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101112d2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101112deu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        g->edi = arg2;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101112eeu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101112fau:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111301u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011130cu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111313u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111320u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011132fu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111335u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011133bu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111345u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111354u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111356u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011135cu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111367u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111376u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111378u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011137eu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111385u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011138cu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111399u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101113a8u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101113aeu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101113b3u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101113bdu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101113c6u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101113c8u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101113cfu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101113e1u:
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
        g->esp = sp0 - 0x34u;
        g->edi = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011140cu:
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
        g->esp = sp0 - 0x34u;
        g->edi = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111416u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111418u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10111428u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011143eu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101110d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101110d0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
