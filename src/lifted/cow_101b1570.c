/* f_0x101b1570 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101b1570(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_8;
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
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
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
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b1587u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101b1587;
    case 0x101b1593u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101b1593;
    case 0x101b15bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b15ba;
    case 0x101b15cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b15ca;
    case 0x101b15d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101b15d4;
    case 0x101b15ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b15eb;
    case 0x101b15fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b15fc;
    case 0x101b1604u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b1604;
    case 0x101b160du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b160d;
    case 0x101b1616u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b1616;
    case 0x101b161fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b161f;
    case 0x101b1628u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b1628;
    case 0x101b1631u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b1631;
    case 0x101b163au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b163a;
    case 0x101b1643u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b1643;
    case 0x101b164cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b164c;
    case 0x101b1651u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b1651;
    case 0x101b165au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b165a;
    case 0x101b165fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b165f;
    case 0x101b1668u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b1668;
    case 0x101b166du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b166d;
    case 0x101b1672u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b1672;
    case 0x101b1677u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b1677;
    case 0x101b167cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b167c;
    case 0x101b168cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b168c;
    case 0x101b16a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b16a0;
    case 0x101b16a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b16a7;
    case 0x101b16b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_101b16b1;
    case 0x101b16beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b16be;
    case 0x101b16ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b16dd;
    case 0x101b16e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b16e5;
    case 0x101b16f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b16f5;
    case 0x101b1701u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b1701;
    case 0x101b1707u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b1707;
    case 0x101b1709u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b1709;
    case 0x101b1716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b1716;
    case 0x101b1735u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b1735;
    case 0x101b173au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b173a;
    case 0x101b174au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101b174a;
    case 0x101b1759u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101b1759;
    case 0x101b1762u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101b1762;
    case 0x101b176bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b176b;
    case 0x101b177au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b177a;
    case 0x101b17a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b17a2;
    case 0x101b17a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b17a9;
    case 0x101b17afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101b17af;
    case 0x101b17bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101b17bf;
    default: break;
    }
#endif

    COW_AT(101b1570)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x20u, t1);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1cu;
    t3 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t1);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(101b1587)
    if (rd8(self + 0xf0ecu) == 0u)
    {
        esi = eax;
        goto L_101b15d4;
    }
    esi = eax;
    COW_AT(101b1593)
    t5 = rd32(sp0 + 4u);
    wr8(sp0 + 4u, (uint8_t)t5);
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr8(sp0 + 5u, (uint8_t)(t5 >> 8u));
    wr8(sp0 + 6u, 0u);
    g->eax = sp0 + 4u;
    g->esp = sp0 - 0x1cu;
    t6 = cow_thiscall(g, COW_IMG(0x101abc50u), self + 0x7e30u, 2, sp0 + 4u, 2u);
    eax = t6;
    COW_AT(101b15ba)
    wr32(sp0 - 0x20u, esi);
    t7 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x24u, t7);
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t7, esi);
    COW_AT(101b15ca)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_101b15d4: ;
    COW_AT(101b15d4)
    t8 = rd32(sp0 + 4u);
    wr32(sp0 - 0x20u, sp0 - 9u);
    wr32(sp0 - 0x24u, (uint16_t)t8);
    g->eax = sp0 - 9u;
    g->ecx = (uint16_t)t8;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t9 = cow_cdecl(g, COW_IMG(0x101b4450u), 2, (uint16_t)t8, sp0 - 9u);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    ebp = t8;
    COW_AT(101b15eb)
    if (rd8(sp0 - 9u) == 0u)
    {
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)eax;
        eax = (eax & 0xffffff00u) | rd8(sp0 - 9u);
    COW_AT(101b15fc)
        if ((uint8_t)ebx == 0u) goto L_101b173a;
    COW_AT(101b1604)
        if ((uint8_t)ebx == 0x5bu) goto L_101b173a;
    COW_AT(101b160d)
        if ((uint8_t)ebx == 0x5du) goto L_101b173a;
    COW_AT(101b1616)
        if ((uint8_t)ebx == 0x5eu) goto L_101b173a;
    COW_AT(101b161f)
        if ((uint8_t)ebx == 0x60u) goto L_101b173a;
    COW_AT(101b1628)
        if ((uint8_t)ebx == 0x7cu) goto L_101b173a;
    COW_AT(101b1631)
        if ((uint8_t)ebx == 0x7eu) goto L_101b173a;
    COW_AT(101b163a)
        if ((uint8_t)ebx == 0xa2u) goto L_101b173a;
    COW_AT(101b1643)
        if ((uint8_t)ebx == 0xa3u) goto L_101b173a;
    COW_AT(101b164c)
        if ((uint8_t)ebx < 0x22u) goto L_101b165a;
    COW_AT(101b1651)
        if ((uint8_t)ebx <= 0x2bu) goto L_101b173a;
L_101b165a: ;
    COW_AT(101b165a)
        if ((uint8_t)ebx < 0x3cu) goto L_101b1668;
    COW_AT(101b165f)
        if ((uint8_t)ebx <= 0x3eu) goto L_101b173a;
L_101b1668: ;
    COW_AT(101b1668)
        if ((uint8_t)ebx < 0xa6u) goto L_101b1672;
    COW_AT(101b166d)
        if ((uint8_t)ebx <= 0xafu) goto L_101b167c;
L_101b1672: ;
    COW_AT(101b1672)
        if ((uint8_t)ebx < 0xb1u) goto L_101b16e5;
    COW_AT(101b1677)
        if ((uint8_t)ebx > 0xddu) goto L_101b16e5;
L_101b167c: ;
    COW_AT(101b167c)
        wr32(sp0 - 0x20u, sp0 - 4u);
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x28u, esi);
        g->ecx = sp0 - 4u;
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x1cu;
        cow_stdcall(g, COW_IMG(0x102bc882u), 3, esi, sp0 - 8u, sp0 - 4u);
        t12 = g->ecx;
        t13 = g->edx;
        ecx = t12;
        edx = t13;
    COW_AT(101b168c)
        wr32(sp0 - 0x20u, ebp);
        t14 = rd32(sp0 - 8u);
        t15 = (t14 & 0xffffff00u) | (t14 & 0xedu) | 1u;
        wr32(sp0 - 8u, t15);
        g->eax = t15;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t16 = cow_cdecl(g, COW_IMG(0x101b17d0u), 1, ebp);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
        edi = t14;
    COW_AT(101b16a0)
        if ((uint8_t)eax != 0u)
        {
            loc_8 = rd32(sp0 - 8u);
        }
        else
        {
    COW_AT(101b16a7)
            t19 = (rd32(sp0 - 8u) & 0xffffff00u) | (uint8_t)(rd32(sp0 - 8u) | 2u);
            wr32(sp0 - 8u, t19);
            loc_8 = t19;
        }
    COW_AT(101b16b1)
        wr32(sp0 - 0x20u, 8u);
        wr32(sp0 - 0x24u, loc_8);
        wr32(sp0 - 0x28u, esi);
        g->eax = loc_8;
        g->esp = sp0 - 0x1cu;
        t20 = cow_stdcall(g, COW_IMG(0x102bc894u), 3, esi, loc_8, 8u);
        eax = t20;
    COW_AT(101b16be)
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, sp0 + 4u);
        wr32(sp0 - 0x28u, 1u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x30u, 9u);
        wr32(sp0 - 0x34u, esi);
        wr8(sp0 + 4u, (uint8_t)ebx);
        wr8(sp0 + 5u, 0u);
        g->eax = eax;
        g->ecx = sp0 + 4u;
        g->edx = sp0 + 4u;
        g->esp = sp0 - 0x1cu;
        t21 = cow_stdcall(g, COW_IMG(0x102bc88eu), 6, esi, 9u, sp0 + 4u, 1u, sp0 + 4u, 1u);
        t22 = g->ecx;
        t23 = g->edx;
        eax = t21;
        ecx = t22;
        edx = t23;
    COW_AT(101b16dd)
        wr32(sp0 - 0x20u, 8u);
        wr32(sp0 - 0x24u, edi);
        loc_24 = edi;
L_101b17a9: ;
    COW_AT(101b17a9)
        wr32(sp0 - 0x28u, esi);
        g->ecx = ecx;
        g->esp = sp0 - 0x1cu;
        cow_stdcall(g, COW_IMG(0x102bc894u), 3, esi, loc_24, 8u);
        t46 = g->ecx;
        ecx = t46;
    }
    COW_AT(101b17af)
    wr32(sp0 - 0x20u, esi);
    t47 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x24u, t47);
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t47, esi);
    COW_AT(101b17bf)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_101b16e5: ;
    COW_AT(101b16e5)
    wr32(sp0 - 0x20u, sp0 - 4u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    wr32(sp0 - 0x28u, esi);
    g->ecx = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, COW_IMG(0x102bc882u), 3, esi, sp0 - 8u, sp0 - 4u);
    t24 = g->ecx;
    t25 = g->edx;
    ecx = t24;
    edx = t25;
    COW_AT(101b16f5)
    t26 = rd32(sp0 - 8u);
    if ((t26 & 2u) == 0u)
    {
        eax = (t26 & 0xffffff00u) | (t26 & 0xefu);
        edi = t26;
    COW_AT(101b1707)
        eax = (eax & 0xffffff00u) | (eax & 0xfcu);
    }
    else
    {
        eax = (t26 & 0xffffff00u) | (t26 & 0xefu);
        edi = t26;
    COW_AT(101b1701)
        eax = (eax & 0xffffff00u) | (eax & 0xfeu) | 2u;
    }
    COW_AT(101b1709)
    wr32(sp0 - 0x20u, 8u);
    wr32(sp0 - 0x24u, eax);
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 8u, eax);
    g->ecx = ecx;
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, COW_IMG(0x102bc894u), 3, esi, eax, 8u);
    t27 = g->ecx;
    ecx = t27;
    COW_AT(101b1716)
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr32(sp0 - 0x30u, 9u);
    wr32(sp0 - 0x34u, esi);
    wr8(sp0 + 4u, (uint8_t)ebx);
    wr8(sp0 + 5u, 0u);
    g->eax = sp0 + 4u;
    g->ecx = ecx;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 0x1cu;
    t28 = cow_stdcall(g, COW_IMG(0x102bc88eu), 6, esi, 9u, sp0 + 4u, 1u, sp0 + 4u, 1u);
    t29 = g->ecx;
    t30 = g->edx;
    eax = t28;
    ecx = t29;
    edx = t30;
    COW_AT(101b1735)
    wr32(sp0 - 0x20u, 8u);
    wr32(sp0 - 0x24u, edi);
    loc_24 = edi;
    goto L_101b17a9;
L_101b173a: ;
    COW_AT(101b173a)
    wr32(sp0 - 0x20u, sp0 - 4u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    wr32(sp0 - 0x28u, esi);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, COW_IMG(0x102bc882u), 3, esi, sp0 - 8u, sp0 - 4u);
    t31 = g->edx;
    edx = t31;
    COW_AT(101b174a)
    wr32(sp0 - 0x20u, esi);
    t32 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x24u, t32);
    g->eax = rd32(COW_IMG(0x103d3c64u));
    g->ecx = t32;
    g->edx = edx;
    t33 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0x1cu;
    t34 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t32, esi);
    t35 = g->ecx;
    t36 = g->edx;
    eax = t34;
    ecx = t35;
    edx = t36;
    COW_AT(101b1759)
    wr32(sp0 - 0x20u, 3u);
    g->edx = edx;
    t37 = rd32(self);
    g->esp = sp0 - 0x1cu;
    t38 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 3u);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    esi = t37;
    COW_AT(101b1762)
    wr32(sp0 - 0x20u, eax);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(esi + 0x3cu), self, 1, eax);
    t40 = g->ecx;
    ecx = t40;
    COW_AT(101b176b)
    t41 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x20u, t41);
    g->eax = t41;
    g->esp = sp0 - 0x1cu;
    t42 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t41);
    eax = t42;
    COW_AT(101b177a)
    wr32(sp0 - 0x20u, 2u);
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, sp0 + 4u);
    wr16(sp0 + 4u, 0u);
    wr32(sp0 - 0x30u, 9u);
    wr32(sp0 - 0x34u, eax);
    wr8(sp0 + 6u, 0u);
    wr16(sp0 + 4u, (uint16_t)ebp);
    g->eax = sp0 + 4u;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 0x1cu;
    t43 = cow_stdcall(g, COW_IMG(0x102bc88eu), 6, eax, 9u, sp0 + 4u, 2u, sp0 + 4u, 2u);
    t44 = g->edx;
    edx = t44;
    esi = eax;
    eax = t43;
    COW_AT(101b17a2)
    wr32(sp0 - 0x20u, 8u);
    t45 = rd32(sp0 - 8u);
    wr32(sp0 - 0x24u, t45);
    ecx = t45;
    loc_24 = t45;
    goto L_101b17a9;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b1570(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b1587u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b1593u:
    {
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101b15bau:
    {
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101b15cau:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101b15d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101b15ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b15fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b1604u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b160du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b1616u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b161fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b1628u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b1631u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b163au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b1643u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b164cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b1651u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b165au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b165fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b1668u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b166du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b1672u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b1677u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b167cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b168cu:
    {
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101b16a0u:
    {
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101b16a7u:
    {
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101b16b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101b16beu:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101b16ddu:
    {
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101b16e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b16f5u:
    {
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101b1701u:
    {
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101b1707u:
    {
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101b1709u:
    {
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101b1716u:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101b1735u:
    {
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101b173au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 9u);
        (void)sp0;
        return 1;
    }
    case 0x101b174au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x20u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101b1759u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101b1762u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101b176bu:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101b177au:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101b17a2u:
    {
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x24u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101b17a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x20u, 8u);
        (void)sp0;
        return 1;
    }
    case 0x101b17afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101b17bfu:
    {
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b1570(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101b1570(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
