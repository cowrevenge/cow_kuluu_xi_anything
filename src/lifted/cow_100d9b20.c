/* f_0x100d9b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_100d9b20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 544u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100d9b32u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100d9b32;
    case 0x100d9b3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; goto E_100d9b3b;
    case 0x100d9b51u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9b51;
    case 0x100d9b56u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9b56;
    case 0x100d9b70u: ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9b70;
    case 0x100d9b7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9b7f;
    case 0x100d9b8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9b8e;
    case 0x100d9b9du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9b9d;
    case 0x100d9bacu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9bac;
    case 0x100d9bbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9bbd;
    case 0x100d9bceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9bce;
    case 0x100d9bddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9bdd;
    case 0x100d9becu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9bec;
    case 0x100d9bf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9bf8;
    case 0x100d9c04u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9c04;
    case 0x100d9c10u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9c10;
    case 0x100d9c1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9c1c;
    case 0x100d9c28u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9c28;
    case 0x100d9c34u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9c34;
    case 0x100d9c40u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9c40;
    case 0x100d9c4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9c4c;
    case 0x100d9c53u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9c53;
    case 0x100d9c5au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9c5a;
    case 0x100d9c66u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9c66;
    case 0x100d9c6du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9c6d;
    case 0x100d9c72u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9c72;
    case 0x100d9c77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x200u); in_ebx = rd32(sp0 - 0x1fcu); g->ebx = rd32(sp0 - 0x1fcu); g->esi = rd32(sp0 - 0x200u); goto E_100d9c77;
    case 0x100d9c98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9c98;
    case 0x100d9ca7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9ca7;
    case 0x100d9cb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9cb2;
    case 0x100d9cb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9cb6;
    case 0x100d9cccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9ccc;
    case 0x100d9cd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9cd3;
    case 0x100d9cd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9cd7;
    case 0x100d9cdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9cdc;
    case 0x100d9cecu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9cec;
    case 0x100d9d15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9d15;
    case 0x100d9d20u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9d20;
    case 0x100d9d34u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x204u); goto E_100d9d34;
    case 0x100d9d44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x204u); g->edi = rd32(sp0 - 0x204u); goto E_100d9d44;
    case 0x100d9d45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9d45;
    case 0x100d9d71u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9d71;
    case 0x100d9d74u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9d74;
    case 0x100d9d77u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9d77;
    case 0x100d9d7du: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9d7d;
    case 0x100d9d8bu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9d8b;
    case 0x100d9d8fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9d8f;
    case 0x100d9d93u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9d93;
    case 0x100d9d9cu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9d9c;
    case 0x100d9d9eu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9d9e;
    case 0x100d9da2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9da2;
    case 0x100d9dabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9dab;
    case 0x100d9dc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9dc6;
    case 0x100d9dc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_100d9dc8;
    default: break;
    }
#endif

    COW_AT(100d9b20)
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)));
        goto L_100d9b3b;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)));
    COW_AT(100d9b32)
    if (eax != 0x70u)
    {
        ebx = in_ebx;
        esi = in_esi;
        goto L_100d9dc8;
    }
L_100d9b3b: ;
    COW_AT(100d9b3b)
    wr32(sp0 - 0x1fcu, in_ebx);
    wr32(sp0 - 0x200u, in_esi);
    wr8(sp0 - 0x1f7u, 0u);
    if (arg2 & 1u)
    {
    COW_AT(100d9b51)
        wr8(sp0 - 0x1f7u, 0x80u);
    }
    COW_AT(100d9b56)
    wr8(sp0 - 0x1f6u, 0u);
    if ((uint8_t)arg1 > 0x29u) goto L_100d9c6d;
    COW_AT(100d9b70)
    t1 = rd32(COW_IMG(0x100d9dd4u) + rd8(COW_IMG(0x100d9e24u) + (uint8_t)arg1) * 4u);
    switch (t1 - RD)
    {
    case 0x100d9b7fu: goto L_100d9b7f;
    case 0x100d9b8eu: goto L_100d9b8e;
    case 0x100d9b9du: goto L_100d9b9d;
    case 0x100d9bacu: goto L_100d9bac;
    case 0x100d9bbdu: goto L_100d9bbd;
    case 0x100d9bceu: goto L_100d9bce;
    case 0x100d9bddu: goto L_100d9bdd;
    case 0x100d9becu: goto L_100d9bec;
    case 0x100d9bf8u: goto L_100d9bf8;
    case 0x100d9c04u: goto L_100d9c04;
    case 0x100d9c10u: goto L_100d9c10;
    case 0x100d9c1cu: goto L_100d9c1c;
    case 0x100d9c28u: goto L_100d9c28;
    case 0x100d9c34u: goto L_100d9c34;
    case 0x100d9c40u: goto L_100d9c40;
    case 0x100d9c4cu: goto L_100d9c4c;
    case 0x100d9c53u: goto L_100d9c53;
    case 0x100d9c5au: goto L_100d9c5a;
    case 0x100d9c66u: goto L_100d9c66;
    case 0x100d9c6du: goto L_100d9c6d;
    default: rt_fatal(g, COW_IMG(0x100d9b78u), "switch");
    }
    return 0;
L_100d9b7f: ;
    COW_AT(100d9b7f)
    wr8(sp0 - 0x1f8u, 9u);
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
L_100d9c77: ;
    COW_AT(100d9c77)
    wr32(sp0 - 0x204u, sp0 + 0x1cu);
    wr32(sp0 - 0x208u, arg6);
    wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
    g->ebx = ebx;
    g->eax = arg6;
    g->ecx = sp0 - 0x1f4u;
    g->edx = sp0 + 0x1cu;
    g->esp = sp0 - 0x1f8u;
    t2 = cow_cdecl(g, COW_IMG(0x10314982u), 5, sp0 - 0x1f4u, arg6, sp0 + 0x1cu, in_esi, in_ebx);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)ebx == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    COW_AT(100d9ca7)
        if ((uint8_t)arg1 >= 0x22u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    COW_AT(100d9cb2)
            if ((uint8_t)eax <= 0x23u)
            {
    COW_AT(100d9cb6)
                wr32(sp0 - 0x204u, 0xefu);
                wr32(sp0 - 0x208u, sp0 - 0x1f4u);
                g->eax = sp0 - 0x1f4u;
                g->edx = edx;
                g->esp = sp0 - 0x1fcu;
                t7 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, sp0 - 0x1f4u, 0xefu, rd32(sp0 - 0x200u));
                t8 = g->ecx;
                t9 = g->edx;
                if (t7 == 0u)
                {
                    ecx = t8;
                    edx = t9;
                }
                else
                {
                    eax = t7;
                    ecx = t8;
                    edx = t9;
    COW_AT(100d9ccc)
                    if (rd8(eax + 1u) >= 0x2fu)
                    {
                        eax = (eax & 0xffffff00u) | rd8(eax + 1u);
    COW_AT(100d9cd3)
                        if ((uint8_t)eax < 0x4du)
                        {
    COW_AT(100d9cd7)
                            wr8(sp0 - 0x1f7u, rd8(sp0 - 0x1f7u) | 0x20u);
                        }
                    }
                }
            }
        }
    }
    else
    {
        eax = t2;
        ecx = t3;
    COW_AT(100d9c98)
        wr32(sp0 - 0x204u, sp0 - 0x1f4u);
        g->edx = sp0 - 0x1f4u;
        g->esp = sp0 - 0x1d8u;
        cow_thiscall_cdecl(g, COW_IMG(0x1018fc40u), ecx, 11, sp0 - 0x1f4u, rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u), rd32(sp0 - 0x1e4u), rd32(sp0 - 0x1e0u), rd32(sp0 - 0x1dcu));
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    COW_AT(100d9cdc)
    if ((uint16_t)arg3 == 0u) goto L_100d9d71;
    COW_AT(100d9cec)
    wr8(sp0 - 0x1f7u, rd8(sp0 - 0x1f7u) | 0x40u);
    wr32(sp0 - 0x204u, arg4);
    wr32(sp0 - 0x208u, (uint16_t)arg3);
    g->eax = (uint16_t)arg3;
    g->esp = sp0 - 0x200u;
    t10 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, (uint16_t)arg3, arg4);
    if (t10 == 0u) goto L_100d9dc6;
    eax = t10;
    COW_AT(100d9d15)
    if (arg5 != 0u)
    {
    COW_AT(100d9d20)
        wr32(sp0 - 0x204u, in_edi);
        ecx = arg5;
        edi = 5u;
L_100d9d34: ;
    COW_AT(100d9d34)
        wr32(COW_IMG(0x10487020u) + ecx - arg5, rd32(ecx));
        wr32(COW_IMG(0x10488800u) + ecx - arg5, rd32(ecx));
        if (edi != 1u)
        {
            ecx = ecx + 4u;
            edi = edi - 1u;
            goto L_100d9d34;
        }
    COW_AT(100d9d44)
    }
    COW_AT(100d9d45)
    wr32(sp0 - 0x204u, sp0 - 0x1f4u);
    wr32(sp0 - 0x208u, 0u);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x210u, sp0 - 0x1f8u);
    wr32(sp0 - 0x214u, 1u);
    wr32(sp0 - 0x218u, eax);
    wr32(sp0 - 0x21cu, COW_IMG(0x103d3c84u));
    g->esp = sp0 - 0x200u;
    cow_call_regs(g, COW_IMG(0x100ad660u), eax, sp0 - 0x1f8u, sp0 - 0x1f4u, 1, 7, COW_IMG(0x103d3c84u), eax, 1u, sp0 - 0x1f8u, 0u, 0u, sp0 - 0x1f4u);
    g->ebx = rd32(sp0 - 0x1fcu);
    g->esi = rd32(sp0 - 0x200u);
    g->edi = in_edi;
    return 1u;
L_100d9b8e: ;
    COW_AT(100d9b8e)
    wr8(sp0 - 0x1f8u, 0xau);
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    goto L_100d9c77;
L_100d9b9d: ;
    COW_AT(100d9b9d)
    wr8(sp0 - 0x1f8u, 0xbu);
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    goto L_100d9c77;
L_100d9bac: ;
    COW_AT(100d9bac)
    wr8(sp0 - 0x1f8u, 0xdcu);
    ebx = in_ebx & 0xffffff00u;
    esi = 1u;
    goto L_100d9c77;
L_100d9bbd: ;
    COW_AT(100d9bbd)
    wr8(sp0 - 0x1f8u, 0xdeu);
    ebx = in_ebx & 0xffffff00u;
    esi = 1u;
    goto L_100d9c77;
L_100d9bce: ;
    COW_AT(100d9bce)
    wr8(sp0 - 0x1f8u, 0xcu);
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    goto L_100d9c77;
L_100d9bdd: ;
    COW_AT(100d9bdd)
    wr8(sp0 - 0x1f8u, 0xdu);
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    goto L_100d9c77;
L_100d9bec: ;
    COW_AT(100d9bec)
    wr8(sp0 - 0x1f8u, 0xeu);
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    goto L_100d9c77;
L_100d9bf8: ;
    COW_AT(100d9bf8)
    wr8(sp0 - 0x1f8u, 0xd6u);
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    goto L_100d9c77;
L_100d9c04: ;
    COW_AT(100d9c04)
    wr8(sp0 - 0x1f8u, 0xd4u);
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    goto L_100d9c77;
L_100d9c10: ;
    COW_AT(100d9c10)
    wr8(sp0 - 0x1f8u, 9u);
    esi = 2u;
L_100d9c72: ;
    COW_AT(100d9c72)
    wr8(sp0 - 0x1f7u, rd8(sp0 - 0x1f7u) | 0x40u);
    ebx = (in_ebx & 0xffffff00u) | 1u;
    goto L_100d9c77;
L_100d9c1c: ;
    COW_AT(100d9c1c)
    wr8(sp0 - 0x1f8u, 0xdu);
    esi = 2u;
    goto L_100d9c72;
L_100d9c28: ;
    COW_AT(100d9c28)
    wr8(sp0 - 0x1f8u, 0xeu);
    esi = 2u;
    goto L_100d9c72;
L_100d9c34: ;
    COW_AT(100d9c34)
    wr8(sp0 - 0x1f8u, 0xd6u);
    esi = 2u;
    goto L_100d9c72;
L_100d9c40: ;
    COW_AT(100d9c40)
    wr8(sp0 - 0x1f8u, 0xau);
    esi = 2u;
    goto L_100d9c72;
L_100d9c4c: ;
    COW_AT(100d9c4c)
    wr8(sp0 - 0x1f8u, 0xc8u);
    esi = 0u;
    goto L_100d9c72;
L_100d9c53: ;
    COW_AT(100d9c53)
    wr8(sp0 - 0x1f8u, 0xc9u);
    esi = 0u;
    goto L_100d9c72;
L_100d9c5a: ;
    COW_AT(100d9c5a)
    wr8(sp0 - 0x1f8u, 0xfu);
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    goto L_100d9c77;
L_100d9c66: ;
    COW_AT(100d9c66)
    wr8(sp0 - 0x1f8u, 0u);
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 0u;
    goto L_100d9c77;
L_100d9c6d: ;
    COW_AT(100d9c6d)
    wr8(sp0 - 0x1f8u, 0x79u);
    esi = 0u;
    goto L_100d9c72;
L_100d9d71: ;
    COW_AT(100d9d71)
    if (esi == 1u) goto L_100d9d7d;
    esi = esi - 1u;
    COW_AT(100d9d74)
    if (esi != 1u) goto L_100d9dab;
    COW_AT(100d9d77)
    eax = arg3;
    edx = sp0 - 0x1f4u;
L_100d9da2: ;
    COW_AT(100d9da2)
    wr32(sp0 - 0x204u, edx);
    g->edx = edx;
    g->esp = sp0 - 0x200u;
    cow_call_regs(g, COW_IMG(0x101ba200u), eax, g->ecx, g->edx, 1, 1, edx);
    t11 = g->edx;
    edx = t11;
L_100d9dab: ;
    COW_AT(100d9dab)
    wr32(sp0 - 0x204u, 0u);
    wr32(sp0 - 0x208u, 1u);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x210u, sp0 - 0x1f8u);
    wr32(sp0 - 0x214u, sp0 - 0x1f4u);
    g->ebx = ebx;
    g->esp = sp0 - 0x200u;
    cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x1f4u, sp0 - 0x1f8u, 0u, 1u, 0u);
L_100d9dc6: ;
    COW_AT(100d9dc6)
    ebx = rd32(sp0 - 0x1fcu);
    esi = rd32(sp0 - 0x200u);
L_100d9dc8: ;
    COW_AT(100d9dc8)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = in_edi;
    return 1u;
L_100d9d7d: ;
    COW_AT(100d9d7d)
    if (rd8(sp0 - 0x1f4u) == 0u)
    {
        eax = (arg3 & 0xffffff00u) | rd8(sp0 - 0x1f4u);
        ecx = 0u;
        edx = sp0 - 0x1f4u;
        goto L_100d9da2;
    }
    eax = (arg3 & 0xffffff00u) | rd8(sp0 - 0x1f4u);
    ecx = 0u;
L_100d9d8b: ;
    COW_AT(100d9d8b)
    if ((uint8_t)eax == 0x3au) goto L_100d9d9e;
    COW_AT(100d9d8f)
    if ((uint8_t)eax == 0x20u) goto L_100d9d9e;
    COW_AT(100d9d93)
    if (rd8(ecx + sp0 - 0x1f3u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 0x1f3u);
        ecx = ecx + 1u;
        goto L_100d9d8b;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 0x1f3u);
    ecx = ecx + 1u;
    COW_AT(100d9d9c)
    edx = sp0 - 0x1f4u;
    goto L_100d9da2;
L_100d9d9e: ;
    COW_AT(100d9d9e)
    edx = ecx + sp0 - 0x1f4u;
    goto L_100d9da2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100d9b20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100d9b32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1f8u;
        (void)sp0;
        return 1;
    }
    case 0x100d9b3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1f8u;
        (void)sp0;
        return 1;
    }
    case 0x100d9b51u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d9b56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d9b70u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->eax = (uint8_t)arg1;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d9b7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9b8eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9b9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9bacu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9bbdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9bceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9bddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9becu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9bf8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c34u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c53u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c5au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c77u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x200u);
        in_ebx = rd32(sp0 - 0x1fcu);
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x100d9c98u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        wr32(sp0 - 0x204u, sp0 + 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100d9ca7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        wr32(sp0 - 0x204u, sp0 + 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100d9cb2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        wr32(sp0 - 0x204u, sp0 + 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100d9cb6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        wr32(sp0 - 0x204u, sp0 + 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x100d9cccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        wr32(sp0 - 0x208u, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9cd3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        wr32(sp0 - 0x208u, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9cd7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        wr32(sp0 - 0x208u, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9cdcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9cecu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        g->eax = arg3;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d15u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d20u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        g->ecx = arg5;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d34u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x204u;
        g->edx = COW_IMG(0x10487020u) - arg5;
        g->esi = COW_IMG(0x10488800u) - arg5;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d44u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x204u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d45u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d71u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        g->eax = arg3;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d74u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        g->eax = arg3;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d77u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        g->eax = arg3;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d7du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        g->eax = arg3;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d8bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        g->edx = sp0 - 0x1f4u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d8fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        g->edx = sp0 - 0x1f4u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d93u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        g->edx = sp0 - 0x1f4u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d9cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        g->edx = sp0 - 0x1f4u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9d9eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        g->edx = sp0 - 0x1f4u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9da2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9dabu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
        (void)sp0;
        return 1;
    }
    case 0x100d9dc6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x100d9dc8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x1f8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100d9b20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100d9b20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
