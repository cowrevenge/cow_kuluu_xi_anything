/* f_0x100e63e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e63e0(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    if (rd16(rd32(COW_IMG(0x104df770u)) + 0x132u) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
    }
    else
    {
        eax = rd32(COW_IMG(0x104df770u));
        wr32(eax + 0x144u, 0u);
        if (rd8(sp0 + 4u) == 0u)
        {
            ecx = self;
            edx = in_edx;
            loc_10 = rd32(sp0 - 0x10u) & 0xffffffu;
            goto L_100e641e;
        }
        loc_10 = rd32(sp0 - 0x10u) & 0xffffffu;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_stdcall(g, COW_IMG(0x100e6790u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        if ((uint8_t)t1 != 0u)
        {
            ecx = t2;
            edx = t3;
            goto L_100e641e;
        }
        eax = t1;
        ecx = t2;
        edx = t3;
        wr8(sp0 + 4u, (uint8_t)eax);
L_100e642a: ;
        ebx = 0x148u;
        ebp = 0u;
        esi = 0u;
        loc_8 = 0u;
        loc_c = 0u;
        loc_4 = 0x174u;
L_100e6440: ;
        t7 = esi + rd32(COW_IMG(0x104df770u)) + 0xa90u;
        g->ecx = ecx;
        g->edx = edx;
        t8 = rd32(COW_IMG(0x104df770u));
        g->esp = sp0 - 0x20u;
        t9 = cow_cdecl(g, COW_IMG(0x100e7b20u), 2, ebp, t7);
        t10 = g->ecx;
        t11 = g->edx;
        if ((int32_t)t9 < 0)
        {
            eax = t9;
            ecx = t10;
            edx = t11;
        }
        else
        {
            edx = t11;
            esi = t7;
            if (!(rd32(esi + 0x98u) & 1u))
            {
                eax = rd32(esi + 0x98u) & 1u;
                ecx = 0u;
                goto L_100e65f0;
            }
            t12 = rd32(esi + 0xcu);
            if ((t12 >> 1u & 0x3ffu) != 1u)
            {
                eax = t12 >> 1u & 0x3ffu;
                ecx = t12;
                edx = rd32(esi + 8u);
                goto L_100e65f0;
            }
            eax = t12 >> 1u & 0x3ffu;
            ecx = t12;
            edx = rd32(esi + 8u);
            if (0u) goto L_100e65f0;
            if ((edx & 0x10000u) == 0u)
            {
                eax = edx & 0x10000u;
                goto L_100e65f0;
            }
            eax = edx & 0x10000u;
            zf = (edx & 0x10000u) == 0u;
            sf = (int32_t)(edx & 0x10000u) < 0;
            cf = 0u;
            pf = PARITY(0u);
            of = 0u;
            { /* shrd edx, ecx, 0x11 */ { unsigned c = (unsigned)(0x11u) & 31u; if (c) { uint32_t a = edx, b = ecx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edx = (uint32_t)(r); } } }
            if (!(rd8(esi + (edx & 7u) * 0x10u + 0x18u) & 1u))
            {
                eax = (eax & 0xffffff00u) | rd8(esi + (edx & 7u) * 0x10u + 0x18u);
                ecx = ecx >> 0x11u;
                edx = (edx & 7u) << 4u;
                goto L_100e65f0;
            }
            eax = (eax & 0xffffff00u) | rd8(esi + (edx & 7u) * 0x10u + 0x18u);
            ecx = ecx >> 0x11u;
            esi = esi + (edx & 7u) * 0x10u + 0x18u;
            edx = (edx & 7u) << 4u;
            if (rd16(esi + 2u) != 1u) goto L_100e65f0;
            if (rd8(esi + 6u) != rd16(rd32(COW_IMG(0x104df770u)) + 0x130u))
            {
                ecx = rd32(COW_IMG(0x104df770u));
                edx = rd8(esi + 6u);
                goto L_100e65f0;
            }
            ecx = rd32(COW_IMG(0x104df770u));
            t13 = rd32(esi + 4u);
            if (rd32(ecx + loc_c + 0xb58u) == ((t13 >> 8u & 0xf0000u) | (uint16_t)t13))
            {
                eax = loc_c;
                edx = (t13 >> 8u & 0xf0000u) | (uint16_t)t13;
            }
            else
            {
                eax = loc_c;
                edx = (t13 >> 8u & 0xf0000u) | (uint16_t)t13;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                t14 = cow_cdecl(g, COW_IMG(0x100e6370u), 1, ebp);
                t15 = g->ecx;
                t16 = g->edx;
                eax = t14;
                ecx = t15;
                edx = t16;
            }
            if (rd8(sp0 + 4u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
                if (loc_10 >> 0x18u != 0u)
                {
                    eax = (eax & 0xffffff00u) | loc_10 >> 0x18u;
                }
                else
                {
                    if ((int32_t)ebp < (int16_t)rd16(rd32(COW_IMG(0x104df770u)) + 0x140u))
                    {
                        eax = rd32(COW_IMG(0x104df770u));
                        ecx = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x104df770u)) + 0x140u);
                    }
                    else
                    {
                        eax = rd32(COW_IMG(0x104df770u));
                        ecx = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x104df770u)) + 0x140u);
                        if ((int32_t)ebx < 368)
                        {
                            if (rd32(eax + 0x144u) == 0u)
                            {
                                ecx = rd32(eax + 0x144u);
                                g->edi = 0u;
                                g->eax = eax;
                                g->esp = sp0 - 0x20u;
                                t17 = cow_stdcall(g, COW_IMG(0x100e1ad0u), 0);
                                t18 = rd32(COW_IMG(0x104df770u));
                                wr32(t18 + 0x144u, t17);
                                t19 = rd32(rd32(COW_IMG(0x104df770u)) + 0x144u);
                                cow_cdecl(g, COW_IMG(0x10103f50u), 1, t19);
                            }
                            t20 = rd32(esi + 4u);
                            t21 = (t20 >> 8u & 0xf0000u) | (uint16_t)t20;
                            t22 = rd32(rd32(COW_IMG(0x104df770u)) + 0x144u);
                            g->esp = sp0 - 0x20u;
                            cow_call_regs(g, COW_IMG(0x10107610u), rd32(COW_IMG(0x104df770u)), g->ecx, g->edx, 1, 2, t22, t21);
                            wr16(ebx + rd32(COW_IMG(0x104df770u)), (uint16_t)ebp);
                            t23 = rd32(esi + 4u);
                            t24 = (t23 >> 8u & 0xf0000u) | (uint16_t)t23;
                            t25 = rd32(COW_IMG(0x104df770u));
                            wr32(loc_4 + t25, t24);
                            eax = loc_4 + 4u;
                            ecx = t24;
                            edx = t25;
                            ebx = ebx + 2u;
                            loc_8 = loc_8 + 1u;
                            loc_4 = loc_4 + 4u;
                        }
                        else
                        {
                            wr16(eax + 0x140u, (uint16_t)ebp);
                            loc_10 = (loc_10 & 0xffffffu) | 0x1000000u;
                        }
                    }
                }
            }
        }
L_100e65f9: ;
        if ((int32_t)(loc_c + 0x100u) < 76800)
        {
            ebp = ebp + 1u;
            esi = loc_c + 0x100u;
            loc_c = loc_c + 0x100u;
            goto L_100e6440;
        }
        if (rd8(sp0 + 4u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(sp0 + 4u);
            if (loc_10 >> 0x18u == 0u)
            {
                wr16(rd32(COW_IMG(0x104df770u)) + 0x140u, 0u);
            }
            if (loc_8 == 0u)
            {
                eax = loc_8;
            }
            else
            {
                eax = loc_8;
                g->eax = eax;
                g->esp = sp0 - 0x14u;
                t29 = cow_thiscall_cdecl(g, COW_IMG(0x100e6650u), ecx, 1, eax);
                eax = t29;
            }
        }
    }
    g->edi = in_edi;
    return (eax & 0xffffff00u) | 1u;
L_100e641e: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_stdcall(g, COW_IMG(0x100e67e0u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    wr8(sp0 + 4u, (uint8_t)t4 == 0u);
    ecx = t5;
    edx = t6;
    goto L_100e642a;
L_100e65f0: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t26 = cow_cdecl(g, COW_IMG(0x100e6370u), 1, ebp);
    t27 = g->ecx;
    t28 = g->edx;
    eax = t26;
    ecx = t27;
    edx = t28;
    goto L_100e65f9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e63e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e63e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
