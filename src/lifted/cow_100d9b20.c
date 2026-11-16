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
    uint32_t loc_1f8;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 544u);

    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)));
        goto L_100d9b3b;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)));
    if (eax != 0x70u)
    {
        ebx = in_ebx;
        esi = in_esi;
        goto L_100d9dc8;
    }
L_100d9b3b: ;
    wr32(sp0 - 0x1fcu, in_ebx);
    wr32(sp0 - 0x200u, in_esi);
    if (!(arg2 & 1u))
    {
        loc_1f8 = rd32(sp0 - 0x1f8u) & 0xffff00ffu;
    }
    else
    {
        loc_1f8 = rd32(sp0 - 0x1f8u) & 0xffff00ffu;
        loc_1f8 = (loc_1f8 & 0xffff00ffu) | 0x8000u;
    }
    if ((uint8_t)arg1 > 0x29u)
    {
        loc_1f8 = loc_1f8 & 0xff00ffffu;
        goto L_100d9c6d;
    }
    loc_1f8 = loc_1f8 & 0xff00ffffu;
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
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 9u;
L_100d9c77: ;
    wr32(sp0 - 0x204u, sp0 + 0x1cu);
    wr32(sp0 - 0x208u, arg6);
    wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
    g->ebx = ebx;
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
        if ((uint8_t)arg1 >= 0x22u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg1;
            if ((uint8_t)eax <= 0x23u)
            {
                wr32(sp0 - 0x204u, 0xefu);
                wr32(sp0 - 0x208u, sp0 - 0x1f4u);
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
                    if (rd8(eax + 1u) >= 0x2fu)
                    {
                        eax = (eax & 0xffffff00u) | rd8(eax + 1u);
                        if ((uint8_t)eax < 0x4du)
                        {
                            loc_1f8 = (rd32(sp0 - 0x1f8u) & 0xffff00ffu) | (rd8(sp0 - 0x1f7u) | 0x20u) << 8u;
                        }
                    }
                }
            }
        }
    }
    else
    {
        ecx = t3;
        wr32(sp0 - 0x204u, sp0 - 0x1f4u);
        g->edx = sp0 - 0x1f4u;
        g->esp = sp0 - 0x1d8u;
        cow_thiscall_cdecl(g, COW_IMG(0x1018fc40u), ecx, 11, sp0 - 0x1f4u, rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u), rd32(sp0 - 0x1e4u), rd32(sp0 - 0x1e0u), rd32(sp0 - 0x1dcu));
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    if ((uint16_t)arg3 == 0u) goto L_100d9d71;
    wr32(sp0 - 0x204u, arg4);
    wr32(sp0 - 0x208u, (uint16_t)arg3);
    g->esp = sp0 - 0x200u;
    t10 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, (uint16_t)arg3, arg4);
    if (t10 == 0u) goto L_100d9dc6;
    eax = t10;
    if (arg5 != 0u)
    {
        wr32(sp0 - 0x204u, in_edi);
        ecx = arg5;
        edi = 5u;
L_100d9d34: ;
        wr32(COW_IMG(0x10487020u) + ecx - arg5, rd32(ecx));
        wr32(COW_IMG(0x10488800u) + ecx - arg5, rd32(ecx));
        if (edi != 1u)
        {
            ecx = ecx + 4u;
            edi = edi - 1u;
            goto L_100d9d34;
        }
    }
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
    return 1u;
L_100d9b8e: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xau;
    goto L_100d9c77;
L_100d9b9d: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xbu;
    goto L_100d9c77;
L_100d9bac: ;
    ebx = in_ebx & 0xffffff00u;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xdcu;
    goto L_100d9c77;
L_100d9bbd: ;
    ebx = in_ebx & 0xffffff00u;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xdeu;
    goto L_100d9c77;
L_100d9bce: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xcu;
    goto L_100d9c77;
L_100d9bdd: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xdu;
    goto L_100d9c77;
L_100d9bec: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xeu;
    goto L_100d9c77;
L_100d9bf8: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xd6u;
    goto L_100d9c77;
L_100d9c04: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xd4u;
    goto L_100d9c77;
L_100d9c10: ;
    esi = 2u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 9u;
L_100d9c72: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    loc_1f8 = (loc_1f8 & 0xffff00ffu) | (uint8_t)(loc_1f8 >> 8u | 0x40u) << 8u;
    goto L_100d9c77;
L_100d9c1c: ;
    esi = 2u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xdu;
    goto L_100d9c72;
L_100d9c28: ;
    esi = 2u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xeu;
    goto L_100d9c72;
L_100d9c34: ;
    esi = 2u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xd6u;
    goto L_100d9c72;
L_100d9c40: ;
    esi = 2u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xau;
    goto L_100d9c72;
L_100d9c4c: ;
    esi = 0u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xc8u;
    goto L_100d9c72;
L_100d9c53: ;
    esi = 0u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xc9u;
    goto L_100d9c72;
L_100d9c5a: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xfu;
    goto L_100d9c77;
L_100d9c66: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = 0u;
    loc_1f8 = loc_1f8 & 0xffffff00u;
    goto L_100d9c77;
L_100d9c6d: ;
    esi = 0u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0x79u;
    goto L_100d9c72;
L_100d9d71: ;
    if (esi == 1u) goto L_100d9d7d;
    esi = esi - 1u;
    if (esi != 1u) goto L_100d9dab;
    eax = arg3;
    edx = sp0 - 0x1f4u;
L_100d9da2: ;
    wr32(sp0 - 0x204u, edx);
    g->edx = edx;
    g->esp = sp0 - 0x200u;
    cow_call_regs(g, COW_IMG(0x101ba200u), eax, g->ecx, g->edx, 1, 1, edx);
    t11 = g->edx;
    edx = t11;
L_100d9dab: ;
    wr32(sp0 - 0x204u, 0u);
    wr32(sp0 - 0x208u, 1u);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x210u, sp0 - 0x1f8u);
    wr32(sp0 - 0x214u, sp0 - 0x1f4u);
    g->ebx = ebx;
    g->esp = sp0 - 0x200u;
    cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x1f4u, sp0 - 0x1f8u, 0u, 1u, 0u);
L_100d9dc6: ;
    ebx = rd32(sp0 - 0x1fcu);
    esi = rd32(sp0 - 0x200u);
L_100d9dc8: ;
    g->ebx = ebx;
    g->esi = esi;
    return 1u;
L_100d9d7d: ;
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
    if ((uint8_t)eax == 0x3au) goto L_100d9d9e;
    if ((uint8_t)eax == 0x20u) goto L_100d9d9e;
    if (rd8(ecx + sp0 - 0x1f3u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 0x1f3u);
        ecx = ecx + 1u;
        goto L_100d9d8b;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 0x1f3u);
    ecx = ecx + 1u;
    edx = sp0 - 0x1f4u;
    goto L_100d9da2;
L_100d9d9e: ;
    edx = ecx + sp0 - 0x1f4u;
    goto L_100d9da2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d9b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d9b20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
