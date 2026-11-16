/* f_0x100d9e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_100d9e50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1f8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
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
        goto L_100d9e6b;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)));
    if (eax != 0x70u)
    {
        ebx = in_ebx;
        esi = in_esi;
        goto L_100da0dc;
    }
L_100d9e6b: ;
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
        goto L_100d9f99;
    }
    loc_1f8 = loc_1f8 & 0xff00ffffu;
    t1 = rd32(COW_IMG(0x100da0e8u) + rd8(COW_IMG(0x100da138u) + (uint8_t)arg1) * 4u);
    switch (t1 - RD)
    {
    case 0x100d9eafu: goto L_100d9eaf;
    case 0x100d9ebeu: goto L_100d9ebe;
    case 0x100d9ecdu: goto L_100d9ecd;
    case 0x100d9edcu: goto L_100d9edc;
    case 0x100d9eebu: goto L_100d9eeb;
    case 0x100d9efau: goto L_100d9efa;
    case 0x100d9f09u: goto L_100d9f09;
    case 0x100d9f18u: goto L_100d9f18;
    case 0x100d9f24u: goto L_100d9f24;
    case 0x100d9f30u: goto L_100d9f30;
    case 0x100d9f3cu: goto L_100d9f3c;
    case 0x100d9f48u: goto L_100d9f48;
    case 0x100d9f54u: goto L_100d9f54;
    case 0x100d9f60u: goto L_100d9f60;
    case 0x100d9f6cu: goto L_100d9f6c;
    case 0x100d9f78u: goto L_100d9f78;
    case 0x100d9f7fu: goto L_100d9f7f;
    case 0x100d9f86u: goto L_100d9f86;
    case 0x100d9f92u: goto L_100d9f92;
    case 0x100d9f99u: goto L_100d9f99;
    default: rt_fatal(g, COW_IMG(0x100d9ea8u), "switch");
    }
    return 0;
L_100d9eaf: ;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 9u;
L_100d9fa3: ;
    wr32(sp0 - 0x204u, sp0 + 0x1cu);
    wr32(sp0 - 0x208u, arg6);
    wr32(sp0 - 0x20cu, sp0 - 0x1f4u);
    g->ebx = arg1;
    g->ecx = sp0 - 0x1f4u;
    g->edx = sp0 + 0x1cu;
    g->esp = sp0 - 0x1f8u;
    cow_cdecl(g, COW_IMG(0x10314982u), 5, sp0 - 0x1f4u, arg6, sp0 + 0x1cu, in_esi, in_ebx);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)arg1 < 0x22u)
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        if ((uint8_t)arg1 <= 0x23u)
        {
            wr32(sp0 - 0x204u, 0xefu);
            wr32(sp0 - 0x208u, sp0 - 0x1f4u);
            g->edx = sp0 - 0x1f4u;
            g->esp = sp0 - 0x1fcu;
            t4 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), ecx, 3, sp0 - 0x1f4u, 0xefu, rd32(sp0 - 0x200u));
            t5 = g->ecx;
            t6 = g->edx;
            if (t4 == 0u)
            {
                ecx = t5;
                edx = t6;
            }
            else
            {
                eax = t4;
                ecx = t5;
                edx = t6;
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
    if ((uint16_t)arg3 == 0u) goto L_100da085;
    wr32(sp0 - 0x204u, arg4);
    wr32(sp0 - 0x208u, (uint16_t)arg3);
    g->esp = sp0 - 0x200u;
    t7 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, edx, 1, 2, (uint16_t)arg3, arg4);
    if (t7 == 0u) goto L_100da0da;
    eax = t7;
    if (arg5 != 0u)
    {
        wr32(sp0 - 0x204u, in_edi);
        ecx = arg5;
        edi = 5u;
L_100da048: ;
        wr32(COW_IMG(0x10487020u) + ecx - arg5, rd32(ecx));
        wr32(COW_IMG(0x10488800u) + ecx - arg5, rd32(ecx));
        if (edi != 1u)
        {
            ecx = ecx + 4u;
            edi = edi - 1u;
            goto L_100da048;
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
    cow_cdecl(g, COW_IMG(0x100ad660u), 7, COW_IMG(0x103d3c84u), eax, 1u, sp0 - 0x1f8u, 0u, 0u, sp0 - 0x1f4u);
    g->ebx = rd32(sp0 - 0x1fcu);
    g->esi = rd32(sp0 - 0x200u);
    return 1u;
L_100d9ebe: ;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xau;
    goto L_100d9fa3;
L_100d9ecd: ;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xbu;
    goto L_100d9fa3;
L_100d9edc: ;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xdcu;
    goto L_100d9fa3;
L_100d9eeb: ;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xdeu;
    goto L_100d9fa3;
L_100d9efa: ;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xcu;
    goto L_100d9fa3;
L_100d9f09: ;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xdu;
    goto L_100d9fa3;
L_100d9f18: ;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xeu;
    goto L_100d9fa3;
L_100d9f24: ;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xd6u;
    goto L_100d9fa3;
L_100d9f30: ;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xd4u;
    goto L_100d9fa3;
L_100d9f3c: ;
    esi = 2u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 9u;
L_100d9f9e: ;
    loc_1f8 = (loc_1f8 & 0xffff00ffu) | (uint8_t)(loc_1f8 >> 8u | 0x40u) << 8u;
    goto L_100d9fa3;
L_100d9f48: ;
    esi = 2u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xdu;
    goto L_100d9f9e;
L_100d9f54: ;
    esi = 2u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xeu;
    goto L_100d9f9e;
L_100d9f60: ;
    esi = 2u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xd6u;
    goto L_100d9f9e;
L_100d9f6c: ;
    esi = 2u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xau;
    goto L_100d9f9e;
L_100d9f78: ;
    esi = 0u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xc8u;
    goto L_100d9f9e;
L_100d9f7f: ;
    esi = 0u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xc9u;
    goto L_100d9f9e;
L_100d9f86: ;
    esi = 1u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0xfu;
    goto L_100d9fa3;
L_100d9f92: ;
    esi = 0u;
    loc_1f8 = loc_1f8 & 0xffffff00u;
    goto L_100d9fa3;
L_100d9f99: ;
    esi = 0u;
    loc_1f8 = (loc_1f8 & 0xffffff00u) | 0x79u;
    goto L_100d9f9e;
L_100da085: ;
    if (esi == 1u) goto L_100da091;
    esi = esi - 1u;
    if (esi != 1u) goto L_100da0bf;
    eax = arg3;
    edx = sp0 - 0x1f4u;
L_100da0b6: ;
    wr32(sp0 - 0x204u, edx);
    g->edx = edx;
    g->esp = sp0 - 0x200u;
    cow_call_regs(g, COW_IMG(0x101ba200u), eax, g->ecx, g->edx, 1, 1, edx);
    t8 = g->edx;
    edx = t8;
L_100da0bf: ;
    wr32(sp0 - 0x204u, 0u);
    wr32(sp0 - 0x208u, 1u);
    wr32(sp0 - 0x20cu, 0u);
    wr32(sp0 - 0x210u, sp0 - 0x1f8u);
    wr32(sp0 - 0x214u, sp0 - 0x1f4u);
    g->ebx = arg1;
    g->esp = sp0 - 0x200u;
    cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x1f4u, sp0 - 0x1f8u, 0u, 1u, 0u);
L_100da0da: ;
    ebx = rd32(sp0 - 0x1fcu);
    esi = rd32(sp0 - 0x200u);
L_100da0dc: ;
    g->ebx = ebx;
    g->esi = esi;
    return 1u;
L_100da091: ;
    if (rd8(sp0 - 0x1f4u) == 0u)
    {
        eax = (arg3 & 0xffffff00u) | rd8(sp0 - 0x1f4u);
        ecx = 0u;
        edx = sp0 - 0x1f4u;
        goto L_100da0b6;
    }
    eax = (arg3 & 0xffffff00u) | rd8(sp0 - 0x1f4u);
    ecx = 0u;
L_100da09f: ;
    if ((uint8_t)eax == 0x3au) goto L_100da0b2;
    if ((uint8_t)eax == 0x20u) goto L_100da0b2;
    if (rd8(ecx + sp0 - 0x1f3u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 0x1f3u);
        ecx = ecx + 1u;
        goto L_100da09f;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 0x1f3u);
    ecx = ecx + 1u;
    edx = sp0 - 0x1f4u;
    goto L_100da0b6;
L_100da0b2: ;
    edx = ecx + sp0 - 0x1f4u;
    goto L_100da0b6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d9e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d9e50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
