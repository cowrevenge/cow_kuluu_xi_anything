/* f_0x10157370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10157370(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 212u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10157392u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_ebx = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_10157392;
    case 0x1015739cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_ebx = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_1015739c;
    case 0x101573a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_ebx = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_101573a0;
    case 0x101573acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_ebx = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_101573ac;
    case 0x101573b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_ebx = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_101573b6;
    case 0x101573bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_ebx = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_101573ba;
    case 0x101573bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_ebx = rd32(sp0 - 0xb4u); in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->ebx = rd32(sp0 - 0xb4u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_101573bf;
    case 0x101573c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_101573c8;
    case 0x101573d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_101573d6;
    case 0x101573e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_101573e5;
    case 0x101573e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_101573e9;
    case 0x101573f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_101573f0;
    case 0x101573f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_101573f4;
    case 0x10157404u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_10157404;
    case 0x10157409u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_10157409;
    case 0x1015740eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_1015740e;
    case 0x10157415u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_10157415;
    case 0x10157418u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_10157418;
    case 0x1015741eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_1015741e;
    case 0x10157425u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_10157425;
    case 0x10157485u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_10157485;
    case 0x101574e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_101574e5;
    case 0x10157557u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_10157557;
    case 0x101575abu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; cf = g->cf; zf = g->zf; in_edi = rd32(sp0 - 0xb0u); in_esi = rd32(sp0 - 0xacu); in_ebp = rd32(sp0 - 0xa8u); g->ebp = rd32(sp0 - 0xa8u); g->edi = rd32(sp0 - 0xb0u); g->esi = rd32(sp0 - 0xacu); goto E_101575ab;
    default: break;
    }
#endif

    COW_AT(10157370)
    wr32(sp0 - 0xa8u, in_ebp);
    wr32(sp0 - 0xacu, in_esi);
    wr32(sp0 - 0xb0u, in_edi);
    wr32(sp0 - 0xb4u, in_ebx);
    eax = arg1 + 0x3c3a4u;
    ecx = self;
    edx = in_edx;
    ebx = in_ebx;
    esi = arg3 + 0x80u;
L_10157392: ;
    COW_AT(10157392)
    if (rd8(eax) != rd8(esi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_101573ba;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    COW_AT(1015739c)
    if ((uint8_t)ecx == 0u) goto L_101573b6;
    COW_AT(101573a0)
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_101573ba;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    COW_AT(101573ac)
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_10157392;
    }
L_101573b6: ;
    COW_AT(101573b6)
    eax = 0u;
L_101573bf: ;
    COW_AT(101573bf)
    if (eax == 0u) goto L_101575ab;
    COW_AT(101573c8)
    if ((rd8(arg3 + 0x7fu) >> 2u) - 1u > 7u) goto L_101573f0;
    eax = (rd8(arg3 + 0x7fu) >> 2u) - 1u;
    COW_AT(101573d6)
    t1 = rd32(COW_IMG(0x101575b8u) + rd8(COW_IMG(0x101575c0u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x101573e5u: goto L_101573e5;
    case 0x101573e9u: goto L_101573e9;
    default: rt_fatal(g, COW_IMG(0x101573deu), "switch");
    }
    return 0;
L_101573ba: ;
    COW_AT(101573ba)
    eax = -cf + 1u - cf;
    goto L_101573bf;
L_101573e5: ;
    COW_AT(101573e5)
    esi = 0u;
L_101573f4: ;
    COW_AT(101573f4)
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_10157415;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(10157404)
    if (eax == 2u) goto L_1015740e;
    COW_AT(10157409)
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_10157418;
    }
L_1015740e: ;
    COW_AT(1015740e)
    eax = 1u;
L_1015741e: ;
    COW_AT(1015741e)
    t2 = rd32(COW_IMG(0x101575c8u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x10157425u: goto L_10157425;
    case 0x10157485u: goto L_10157485;
    case 0x101574e5u: goto L_101574e5;
    case 0x10157557u: goto L_10157557;
    default: rt_fatal(g, COW_IMG(0x1015741eu), "switch");
    }
    return 0;
L_101573e9: ;
    COW_AT(101573e9)
    esi = 1u;
    goto L_101573f4;
L_101573f0: ;
    COW_AT(101573f0)
    esi = rd32(sp0 - 0x84u);
    goto L_101573f4;
L_10157415: ;
    COW_AT(10157415)
    cf = eax < 3u;
    zf = eax == 3u;
L_10157418: ;
    COW_AT(10157418)
    if (!cf && !zf) goto L_101575ab;
    goto L_1015741e;
L_10157425: ;
    COW_AT(10157425)
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, COW_IMG(0x10258c20u), sp0 - 0xa4u, 0);
    wr32(sp0 - 0xb4u, esi);
    t43 = rd32(arg3 + 0x90u);
    wr32(sp0 - 0xb8u, t43);
    wr32(sp0 - 0xbcu, sp0 - 0xa4u);
    g->eax = sp0 - 0xa4u;
    g->edx = t43;
    t44 = cow_thiscall(g, COW_IMG(0x10156fd0u), rd32(COW_IMG(0x10578768u)), 3, sp0 - 0xa4u, t43, esi);
    t45 = g->edx;
    g->edx = t45;
    t46 = cow_thiscall(g, COW_IMG(0x10258c50u), sp0 - 0xa4u, 0);
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 - 0xb4u, t46);
    wr32(sp0 - 0xb8u, arg3 + 0x80u);
    wr32(sp0 - 0xbcu, 0x33u);
    wr32(sp0 - 0xc0u, 0xau);
    g->ecx = t47;
    g->edx = t48;
    g->esp = sp0 - 0xb8u;
    t49 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x33u);
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 - 0xbcu, t49);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xd0u, 0x29u);
    g->edx = t51;
    g->esp = sp0 - 0xb4u;
    t52 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 0x29u, 0u, 0u, 0u, 0u, t49, arg3 + 0x80u);
    t53 = g->edx;
    g->edx = t53;
    g->esp = sp0 - 0xb0u;
    t54 = cow_thiscall(g, COW_IMG(0x10258be0u), sp0 - 0xa4u, 0);
    t55 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t55;
    return (t54 & 0xffffff00u) | 1u;
L_10157485: ;
    COW_AT(10157485)
    g->eax = eax;
    g->esp = sp0 - 0xb0u;
    t29 = cow_thiscall(g, COW_IMG(0x102588a0u), sp0 - 0xa4u, 0);
    wr32(sp0 - 0xb4u, esi);
    t30 = rd32(arg3 + 0x90u);
    wr32(sp0 - 0xb8u, t30);
    wr32(sp0 - 0xbcu, sp0 - 0xa4u);
    g->edx = sp0 - 0xa4u;
    t31 = cow_thiscall(g, COW_IMG(0x10156fd0u), rd32(COW_IMG(0x10578768u)), 3, sp0 - 0xa4u, t30, esi);
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_thiscall(g, COW_IMG(0x10258910u), sp0 - 0xa4u, 0);
    t34 = g->ecx;
    t35 = g->edx;
    wr32(sp0 - 0xb4u, t33);
    wr32(sp0 - 0xb8u, arg3 + 0x80u);
    wr32(sp0 - 0xbcu, 0x33u);
    wr32(sp0 - 0xc0u, 0xau);
    g->ecx = t34;
    g->edx = t35;
    g->esp = sp0 - 0xb8u;
    t36 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x33u);
    t37 = g->ecx;
    t38 = g->edx;
    wr32(sp0 - 0xbcu, t36);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xd0u, 0x29u);
    g->edx = t38;
    g->esp = sp0 - 0xb4u;
    t39 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 0x29u, 0u, 0u, 0u, 0u, t36, arg3 + 0x80u);
    t40 = g->edx;
    g->edx = t40;
    g->esp = sp0 - 0xb0u;
    t41 = cow_thiscall(g, COW_IMG(0x10258860u), sp0 - 0xa4u, 0);
    t42 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t42;
    return (t41 & 0xffffff00u) | 1u;
L_101574e5: ;
    COW_AT(101574e5)
    g->edx = edx;
    g->esp = sp0 - 0xb0u;
    cow_thiscall(g, COW_IMG(0x102586b0u), sp0 - 0xa4u, 0);
    t17 = g->edx;
    wr32(sp0 - 0xb4u, esi);
    t18 = rd32(arg3 + 0x90u);
    wr32(sp0 - 0xb8u, t18);
    wr32(sp0 - 0xbcu, sp0 - 0xa4u);
    g->eax = t18;
    t19 = cow_thiscall(g, COW_IMG(0x10156fd0u), rd32(COW_IMG(0x10578768u)), 3, sp0 - 0xa4u, t18, esi);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, 0xffffffffu);
    wr32(sp0 - 0xbcu, 0x80u);
    wr32(sp0 - 0xc0u, sp0 - 0x80u);
    g->edx = sp0 - 0x80u;
    cow_thiscall(g, COW_IMG(0x10258730u), sp0 - 0xa4u, 4, sp0 - 0x80u, 0x80u, 0xffffffffu, 0u);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0xb4u, sp0 - 0x80u);
    wr32(sp0 - 0xb8u, arg3 + 0x80u);
    wr32(sp0 - 0xbcu, 0x33u);
    wr32(sp0 - 0xc0u, 0xau);
    g->eax = sp0 - 0x80u;
    g->ecx = t20;
    g->edx = t21;
    g->esp = sp0 - 0xb8u;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x33u);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0xbcu, t22);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xd0u, 0x29u);
    g->edx = t24;
    g->esp = sp0 - 0xb4u;
    t25 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 0x29u, 0u, 0u, 0u, 0u, t22, arg3 + 0x80u);
    t26 = g->edx;
    g->edx = t26;
    g->esp = sp0 - 0xb0u;
    t27 = cow_thiscall(g, COW_IMG(0x10258650u), sp0 - 0xa4u, 0);
    t28 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t28;
    return (t27 & 0xffffff00u) | 1u;
L_10157557: ;
    COW_AT(10157557)
    g->eax = eax;
    g->esp = sp0 - 0xb0u;
    t3 = cow_thiscall(g, COW_IMG(0x10258a60u), sp0 - 0xa4u, 0);
    wr32(sp0 - 0xb4u, esi);
    t4 = rd32(arg3 + 0x90u);
    wr32(sp0 - 0xb8u, t4);
    wr32(sp0 - 0xbcu, sp0 - 0xa4u);
    g->edx = sp0 - 0xa4u;
    t5 = cow_thiscall(g, COW_IMG(0x10156fd0u), rd32(COW_IMG(0x10578768u)), 3, sp0 - 0xa4u, t4, esi);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10258af0u), sp0 - 0xa4u, 0);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0xb4u, t7);
    wr32(sp0 - 0xb8u, arg3 + 0x80u);
    wr32(sp0 - 0xbcu, 0x33u);
    wr32(sp0 - 0xc0u, 0xau);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0xb8u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x33u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0xbcu, t10);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xd0u, 0x29u);
    g->edx = t12;
    g->esp = sp0 - 0xb4u;
    t13 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 0x29u, 0u, 0u, 0u, 0u, t10, arg3 + 0x80u);
    t14 = g->edx;
    g->edx = t14;
    g->esp = sp0 - 0xb0u;
    t15 = cow_thiscall(g, COW_IMG(0x10258a20u), sp0 - 0xa4u, 0);
    t16 = g->edx;
    eax = t15;
    edx = t16;
L_101575ab: ;
    COW_AT(101575ab)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10157370(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10157392u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_ebx = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1015739cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_ebx = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101573a0u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_ebx = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101573acu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_ebx = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101573b6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_ebx = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101573bau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_ebx = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101573bfu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_ebx = rd32(sp0 - 0xb4u);
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb4u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101573c8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101573d6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101573e5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101573e9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101573f0u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101573f4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10157404u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10157409u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1015740eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10157415u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10157418u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x1015741eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10157425u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10157485u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101574e5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x10157557u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        g->ebp = arg3;
        g->edi = arg3 + 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101575abu:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        zf = g->zf;
        in_edi = rd32(sp0 - 0xb0u);
        in_esi = rd32(sp0 - 0xacu);
        in_ebp = rd32(sp0 - 0xa8u);
        g->esp = sp0 - 0xb0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10157370(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10157370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
