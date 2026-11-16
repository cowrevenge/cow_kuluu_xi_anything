/* f_0x102d2c36 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_102d2c36(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t loc_e4;
    uint32_t loc_e8;
    uint32_t loc_ec;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 260u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xe4u, in_ebx);
    wr32(sp0 - 0xe8u, in_esi);
    wr32(sp0 - 0xecu, in_edi);
    if (rd32(sp0 + 4u) == 0u)
    {
        edx = in_edx;
        goto L_102d2c7a;
    }
    edi = rd32(sp0 + 4u);
    if (in_edx != 0xffffffffu)
    {
        esi = in_edx;
    }
    else
    {
        esi = 0u;
    }
    if (esi != (esi & 0x20bu))
    {
        edx = esi & 0x20bu;
        goto L_102d2c7a;
    }
    edx = esi & 0x20bu;
    if (arg7 == 0u) goto L_102d2c84;
    if (arg7 == 1u) goto L_102d2c84;
    if (arg7 == 2u) goto L_102d2c84;
    if (arg7 == 3u) goto L_102d2c84;
L_102d2c7a: ;
    eax = 0x8876086cu;
    loc_4 = in_ebp;
    loc_e4 = in_ebx;
    loc_e8 = in_esi;
    loc_ec = in_edi;
L_102d2f5b: ;
    g->ebx = loc_e4;
    g->esi = loc_e8;
    g->edi = loc_ec;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102d2c84: ;
    if (arg6 == 0u)
    {
        wr32(sp0 - 0xcu, 0u);
        ecx = arg6;
        loc_c = 0u;
    }
    else
    {
        wr32(sp0 - 0xcu, rd32(arg6));
        ecx = rd32(arg6);
        loc_c = rd32(arg6);
    }
    if (arg7 == 3u) goto L_102d2cbf;
    wr32(sp0 - 0xf0u, loc_c);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xecu;
    t1 = cow_cdecl(g, COW_IMG(0x102d2626u), 1, loc_c);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xf4u, t1);
    wr32(sp0 - 0xf8u, arg8);
    wr32(sp0 - 0xfcu, esi);
    wr32(sp0 - 0x100u, edi);
    g->ebx = arg2;
    g->esp = sp0 - 0xf0u;
    t4 = cow_call_regs(g, COW_IMG(0x102d272du), g->eax, t2, t3, 1, 4, edi, esi, arg8, t1);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xcu, t4);
    if (t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        loc_c = t4;
        goto L_102d2ccc;
    }
    edx = t6;
    eax = 0x8876086au;
    goto L_102d2f5b;
L_102d2cbf: ;
    if (loc_c == 0u)
    {
        wr32(sp0 - 0xcu, 0x15u);
        loc_c = 0x15u;
    }
L_102d2ccc: ;
    if (arg2 == 0u)
    {
        wr32(sp0 + 4u, 0xffffffffu);
    }
    else
    {
        wr32(sp0 + 4u, rd32(arg2));
    }
    if (arg3 == 0u)
    {
        ebx = 0xffffffffu;
    }
    else
    {
        ebx = rd32(arg3);
    }
    if (arg4 == 0u)
    {
        wr32(sp0 - 8u, 0xffffffffu);
        loc_8 = 0xffffffffu;
    }
    else
    {
        wr32(sp0 - 8u, rd32(arg4));
        loc_8 = rd32(arg4);
    }
    if (rd32(sp0 + 4u) != 0xffffffffu) goto L_102d2d1a;
    if (ebx != 0xffffffffu) goto L_102d2d15;
    wr32(sp0 + 4u, 0x100u);
    ebx = 0x100u;
L_102d2d33: ;
    if (arg8 == 5u)
    {
        if (rd32(sp0 + 4u) > ebx)
        {
            ebx = rd32(sp0 + 4u);
        }
        wr32(sp0 + 4u, ebx);
    }
    if (loc_8 == 0xffffffffu) goto L_102d2d51;
    if (loc_8 != 0u) goto L_102d2d58;
L_102d2d51: ;
    wr32(sp0 - 8u, 1u);
    loc_8 = 1u;
L_102d2d58: ;
    if (arg7 != 3u)
    {
        wr32(sp0 - 0xf0u, sp0 - 0xe0u);
        wr32(sp0 - 0xf4u, edi);
        g->esp = sp0 - 0xecu;
        cow_thiscall(g, rd32(rd32(edi) + 0x1cu), sp0 - 0xe0u, 2, edi, sp0 - 0xe0u);
        if (arg8 != 4u) goto L_102d2d89;
        if (rd32(sp0 - 8u) <= rd32(sp0 - 0x80u))
        {
            eax = rd32(sp0 - 0x80u);
        }
        else
        {
            eax = rd32(sp0 - 0x80u);
            wr32(sp0 - 8u, eax);
            loc_8 = eax;
        }
        if (rd32(sp0 + 4u) > eax)
        {
            wr32(sp0 + 4u, eax);
        }
L_102d2dca: ;
        if (ebx > eax)
        {
            ebx = eax;
        }
L_102d2dd0: ;
        if (arg8 == 3u)
        {
            wr32(sp0 - 0xf0u, 2u);
            eax = 2u;
        }
        else
        {
            if (arg8 == 4u)
            {
                eax = 0x40000u;
            }
            else
            {
                if (arg8 != 5u)
                {
                    eax = rd32(sp0 + 4u);
                }
                else
                {
                    eax = 0x20000u;
                }
            }
        }
        if ((rd32(sp0 - 0xa4u) & eax) != 0u)
        {
            t7 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, 1u);
            if (t7 <= 1u) goto L_102d2e12;
            eax = t7;
L_102d2e0a: ;
            wr32(sp0 + 4u, rd32(sp0 + 4u) << 1u);
            if (rd32(sp0 + 4u) < eax) goto L_102d2e0a;
L_102d2e12: ;
            if (ebx <= 1u)
            {
                ebx = 1u;
                goto L_102d2e20;
            }
            eax = ebx;
            ebx = 1u;
L_102d2e1a: ;
            if (ebx << 1u < eax)
            {
                ebx = ebx << 1u;
                goto L_102d2e1a;
            }
            ebx = ebx << 1u;
L_102d2e20: ;
            wr32(sp0 - 8u, 1u);
            if (loc_8 <= 1u)
            {
                loc_8 = 1u;
                goto L_102d2e32;
            }
            eax = loc_8;
            loc_8 = 1u;
L_102d2e2a: ;
            wr32(sp0 - 8u, loc_8 << 1u);
            if (loc_8 << 1u < eax)
            {
                loc_8 = loc_8 << 1u;
                goto L_102d2e2a;
            }
            loc_8 = loc_8 << 1u;
        }
    }
L_102d2e32: ;
    if (loc_c == 0x31545844u) goto L_102d2e58;
    eax = loc_c;
    if (eax == 0x32545844u) goto L_102d2e58;
    if (eax == 0x33545844u) goto L_102d2e58;
    if (eax == 0x34545844u) goto L_102d2e58;
    if (eax != 0x35545844u) goto L_102d2e6c;
L_102d2e58: ;
    t8 = rd32(sp0 + 4u) + 3u & 0xfffffffcu;
    wr32(sp0 + 4u, t8);
    edx = t8;
    ebx = ebx + 3u & 0xfffffffcu;
L_102d2e6f: ;
    if (arg8 == 3u)
    {
        eax = 0x4000u;
    }
    else
    {
        if (arg8 == 4u)
        {
            eax = 0x8000u;
        }
        else
        {
            if (arg8 != 5u)
            {
                eax = rd32(sp0 + 4u);
            }
            else
            {
                eax = 0x10000u;
            }
        }
    }
    if (arg5 == 0u)
    {
        edi = 0xffffffffu;
    }
    else
    {
        edi = rd32(arg5);
    }
    if (arg7 == 3u) goto L_102d2ed8;
    if ((rd32(sp0 - 0xa4u) & eax) == 0u) goto L_102d2ed3;
    if (!(rd8(sp0 - 0xa3u) & 1u)) goto L_102d2ed8;
    if ((edx & edx - 1u) != 0u) goto L_102d2ed3;
    if ((ebx & ebx - 1u) != 0u) goto L_102d2ed3;
    if ((loc_8 & loc_8 - 1u) == 0u) goto L_102d2ed8;
L_102d2ed3: ;
    edi = 1u;
L_102d2f23: ;
    if (arg2 != 0u)
    {
        t9 = rd32(sp0 + 4u);
        wr32(arg2, t9);
    }
    if (arg3 != 0u)
    {
        wr32(arg3, ebx);
    }
    if (arg4 != 0u)
    {
        wr32(arg4, loc_8);
    }
    if (arg5 != 0u)
    {
        wr32(arg5, edi);
    }
    if (arg6 != 0u)
    {
        wr32(arg6, loc_c);
    }
    eax = 0u;
    loc_4 = in_ebp;
    loc_e4 = in_ebx;
    loc_e8 = in_esi;
    loc_ec = in_edi;
    goto L_102d2f5b;
L_102d2d15: ;
    wr32(sp0 + 4u, ebx);
L_102d2d21: ;
    if (rd32(sp0 + 4u) == 0u)
    {
        wr32(sp0 + 4u, 1u);
    }
    if (ebx == 0u)
    {
        ebx = ebx + 1u;
    }
    goto L_102d2d33;
L_102d2d1a: ;
    if (ebx == 0xffffffffu)
    {
        ebx = rd32(sp0 + 4u);
    }
    goto L_102d2d21;
L_102d2d89: ;
    if (rd32(sp0 + 4u) > rd32(sp0 - 0x88u))
    {
        eax = rd32(sp0 - 0x88u);
        wr32(sp0 + 4u, eax);
    }
    if (ebx > rd32(sp0 - 0x84u))
    {
        ebx = rd32(sp0 - 0x84u);
    }
    if (arg8 != 3u) goto L_102d2dd0;
    if ((rd8(sp0 - 0xa4u) & 0x20u) == 0u)
    {
        eax = rd32(sp0 - 0x78u);
    }
    else
    {
        eax = 1u;
    }
    if (eax == 0u) goto L_102d2dd0;
    if (rd32(sp0 + 4u) > eax * ebx)
    {
        ecx = eax * ebx;
        wr32(sp0 + 4u, ecx);
    }
    eax = eax * rd32(sp0 + 4u);
    goto L_102d2dca;
L_102d2e6c: ;
    edx = rd32(sp0 + 4u);
    goto L_102d2e6f;
L_102d2ed8: ;
    eax = rd32(sp0 + 4u);
    esi = 0u;
L_102d2ee2: ;
    if (eax != 0u) goto L_102d2edf;
    if (ebx == 0u)
    {
        ecx = 0u;
        goto L_102d2ef5;
    }
    eax = ebx;
    ecx = 0u;
L_102d2eee: ;
    if (eax >> 1u != 0u)
    {
        eax = eax >> 1u;
        ecx = ecx + 1u;
        goto L_102d2eee;
    }
    ecx = ecx + 1u;
L_102d2ef5: ;
    if (loc_8 == 0u)
    {
        edx = 0u;
        goto L_102d2f05;
    }
    eax = loc_8;
    edx = 0u;
L_102d2efe: ;
    if (eax >> 1u != 0u)
    {
        eax = eax >> 1u;
        edx = edx + 1u;
        goto L_102d2efe;
    }
    edx = edx + 1u;
L_102d2f05: ;
    if (esi > ecx)
    {
        eax = esi;
    }
    else
    {
        eax = ecx;
    }
    if (arg8 == 4u)
    {
        if (edx > eax)
        {
            eax = edx;
        }
    }
    if (edi > eax) goto L_102d2f21;
    if (edi != 0u) goto L_102d2f23;
L_102d2f21: ;
    edi = eax;
    goto L_102d2f23;
L_102d2edf: ;
    eax = eax >> 1u;
    esi = esi + 1u;
    goto L_102d2ee2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d2c36(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d2c36(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
