/* f_0x102a96e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102a96e0(Guest* g)
{
    uint32_t al_m10;
    uint32_t al_mc;
    double d31;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a96f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a96f5;
    case 0x102a9707u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9707;
    case 0x102a9712u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9712;
    case 0x102a9717u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9717;
    case 0x102a971cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a971c;
    case 0x102a9725u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9725;
    case 0x102a9731u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9731;
    case 0x102a9740u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9740;
    case 0x102a9743u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9743;
    case 0x102a974cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a974c;
    case 0x102a9753u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9753;
    case 0x102a975cu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a975c;
    case 0x102a9767u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9767;
    case 0x102a9770u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9770;
    case 0x102a9779u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9779;
    case 0x102a9789u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9789;
    case 0x102a979cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a979c;
    case 0x102a97a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a97a2;
    case 0x102a97acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a97ac;
    case 0x102a97bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a97bd;
    case 0x102a97c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a97c9;
    case 0x102a97d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a97d8;
    case 0x102a97e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a97e3;
    case 0x102a9803u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9803;
    case 0x102a980du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a980d;
    case 0x102a9817u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9817;
    case 0x102a982du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a982d;
    case 0x102a9839u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9839;
    case 0x102a9843u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9843;
    case 0x102a9849u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a9849;
    case 0x102a985eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp1 - 0x20u); in_esi = rd32(sp1 - 0x1cu); in_ebx = rd32(sp1 - 0x18u); al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp1 - 0x18u); g->edi = rd32(sp1 - 0x20u); g->esi = rd32(sp1 - 0x1cu); goto E_102a985e;
    default: break;
    }
#endif

    COW_AT(102a96e0)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp1 - 0x20u;
    COW_RET(0x102a96f5u);
    cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
    COW_AT(102a96f5)
    t3 = rd32(arg1 + 0x14u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x24u;
    COW_RET(0x102a9707u);
    cow_cdecl(g, COW_IMG(0x102858b0u), 3, COW_IMG(0x103be800u), arg1, t3);
    t4 = g->ecx;
    t5 = g->edx;
    ecx = t4;
    edx = t5;
    COW_AT(102a9707)
    if (arg2 != 1u) goto L_102a9753;
    COW_AT(102a9712)
    eax = arg2;
    ebx = 0u;
    esi = arg1 + 0x18u;
L_102a9717: ;
    COW_AT(102a9717)
    t6 = rd32(esi);
    if (t6 != 0u)
    {
    COW_AT(102a971c)
        g->eax = eax;
        g->ecx = arg3 + 1u;
        g->esp = sp1 - 0x20u;
        COW_RET(0x102a9725u);
        t7 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3 + 1u);
        t8 = g->ecx;
        eax = t7;
        ecx = t8;
    COW_AT(102a9725)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = rd32(esi);
        t9 = rd32(esi);
        g->esp = sp1 - 0x24u;
        COW_RET(0x102a9731u);
        t10 = cow_cdecl(g, COW_IMG(0x102a9870u), 1, ebx);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    COW_AT(102a9731)
        g->ebx = ebx;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp1 - 0x24u;
        COW_RET(0x102a9740u);
        t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 3, COW_IMG(0x103be7d0u), ebx, eax);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    COW_AT(102a9740)
    }
    COW_AT(102a9743)
    if ((int32_t)(ebx + 1u) < 12)
    {
        ebx = ebx + 1u;
        esi = esi + 4u;
        goto L_102a9717;
    }
    COW_AT(102a974c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_102a9753: ;
    COW_AT(102a9753)
    if ((int32_t)arg2 >= 2)
    {
    COW_AT(102a975c)
        eax = arg2;
        esi = arg1 + 0x18u;
        al_m10 = 0u;
L_102a9767: ;
    COW_AT(102a9767)
        t15 = rd32(esi);
        if (t15 != 0u)
        {
    COW_AT(102a9770)
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            COW_RET(0x102a9779u);
            cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3 + 1u);
            t16 = g->edx;
            edx = t16;
    COW_AT(102a9779)
            g->eax = rd32(esi);
            g->ecx = al_m10;
            t17 = rd32(esi);
            g->esp = sp1 - 0x24u;
            COW_RET(0x102a9789u);
            t18 = cow_cdecl(g, COW_IMG(0x102a9870u), 1, al_m10);
            t19 = g->ecx;
            eax = t18;
            ecx = t19;
    COW_AT(102a9789)
            g->ebx = 0u;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = al_m10;
            g->esp = sp1 - 0x24u;
            COW_RET(0x102a979cu);
            t20 = cow_cdecl(g, COW_IMG(0x102858b0u), 3, COW_IMG(0x103be7d0u), al_m10, eax);
            t21 = g->ecx;
            t22 = g->edx;
            eax = t20;
            ecx = t21;
            edx = t22;
    COW_AT(102a979c)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x30u;
            COW_RET(0x102a97a2u);
            t23 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3 + 1u);
            t24 = g->ecx;
            t25 = g->edx;
            eax = t23;
            ecx = t24;
            edx = t25;
    COW_AT(102a97a2)
            g->ebx = 0u;
            g->edx = edx;
            g->esp = sp1 - 0x30u;
            COW_RET(0x102a97acu);
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103ba878u), arg3 + 1u);
            t26 = g->edx;
            edx = t26;
    COW_AT(102a97ac)
            if ((int32_t)rd32(arg1 + 0x14u) <= 0)
            {
                ecx = rd32(arg1 + 0x14u);
                ebx = 0u;
                goto L_102a982d;
            }
            ebx = 0u;
            al_mc = 0u;
L_102a97bd: ;
    COW_AT(102a97bd)
            g->eax = arg3 + 2u;
            g->ecx = arg3;
            g->esp = sp1 - 0x20u;
            COW_RET(0x102a97c9u);
            t27 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3 + 2u);
            t28 = g->ecx;
            eax = t27;
            ecx = t28;
    COW_AT(102a97c9)
            g->ebx = ebx;
            g->ecx = ecx;
            g->edx = al_mc;
            g->esp = sp1 - 0x24u;
            COW_RET(0x102a97d8u);
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be7c8u), al_mc);
            t29 = g->ecx;
            t30 = g->edx;
            ecx = t29;
            edx = t30;
    COW_AT(102a97d8)
            if ((int32_t)rd32(esi) <= 0)
            {
                eax = rd32(esi);
                goto L_102a980d;
            }
            edi = 0u;
L_102a97e3: ;
    COW_AT(102a97e3)
            d31 = (double)rdf32(ebx * 4u + rd32(esi + 0x3cu));
            g->ebx = ebx + 1u;
            g->ecx = cow_dhi(d31);
            g->edx = cow_dlo(d31);
            g->esp = sp1 - 0x20u;
            COW_RET(0x102a9803u);
            cow_cdecl(g, COW_IMG(0x102858b0u), 3, COW_IMG(0x103bb5c8u), cow_dlo(d31), cow_dhi(d31));
            t32 = g->ecx;
            t33 = g->edx;
            ecx = t32;
            edx = t33;
            ebx = ebx + 1u;
    COW_AT(102a9803)
            if ((int32_t)(edi + 1u) < (int32_t)rd32(esi))
            {
                edi = edi + 1u;
                goto L_102a97e3;
            }
            eax = rd32(esi);
L_102a980d: ;
    COW_AT(102a980d)
            g->ebx = ebx;
            g->esp = sp1 - 0x1cu;
            COW_RET(0x102a9817u);
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10350e4cu), in_edi);
    COW_AT(102a9817)
            if ((int32_t)(al_mc + 1u) < (int32_t)rd32(arg1 + 0x14u))
            {
                edx = rd32(arg1 + 0x14u);
                al_mc = al_mc + 1u;
                goto L_102a97bd;
            }
            ecx = arg1;
L_102a982d: ;
    COW_AT(102a982d)
            g->eax = arg3 + 1u;
            g->ecx = ecx;
            g->edx = arg3;
            g->esp = sp1 - 0x20u;
            COW_RET(0x102a9839u);
            t34 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 1, arg3 + 1u);
            t35 = g->ecx;
            t36 = g->edx;
            eax = t34;
            ecx = t35;
            edx = t36;
    COW_AT(102a9839)
            g->ebx = ebx;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp1 - 0x20u;
            COW_RET(0x102a9843u);
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3238u), arg3 + 1u);
            t37 = g->ecx;
            t38 = g->edx;
            ecx = t37;
            edx = t38;
    COW_AT(102a9843)
        }
    COW_AT(102a9849)
        if ((int32_t)(al_m10 + 1u) < 12)
        {
            eax = al_m10 + 1u;
            esi = esi + 4u;
            al_m10 = al_m10 + 1u;
            goto L_102a9767;
        }
    }
    COW_AT(102a985e)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a96e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x102a96f5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        wr32(sp1 - 0x18u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102a9707u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a9712u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a9717u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a971cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a9725u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a9731u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a9740u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a9743u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a974cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102a9753u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a975cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->eax = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a9767u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a9770u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a9779u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x24u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a9789u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x28u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a979cu:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x30u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102a97a2u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x34u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x34u, arg3 + 1u);
        (void)sp0;
        return 1;
    }
    case 0x102a97acu:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x38u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102a97bdu:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102a97c9u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102a97d8u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102a97e3u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102a9803u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102a980du:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102a9817u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102a982du:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102a9839u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x24u;
        g->ebp = sp0 - 4u;
        wr32(sp1 - 0x24u, arg3 + 1u);
        (void)sp0;
        return 1;
    }
    case 0x102a9843u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102a9849u:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102a985eu:
    {
        uint32_t al_m10;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp1 - 0x20u);
        in_esi = rd32(sp1 - 0x1cu);
        in_ebx = rd32(sp1 - 0x18u);
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x20u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a96e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102a96e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
