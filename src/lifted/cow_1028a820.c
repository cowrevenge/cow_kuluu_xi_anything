/* f_0x1028a820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1028a820(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0xa04u) == 0u)
    {
        eax = rd32(COW_IMG(0x1099d200u));
        goto L_1028a83c;
    }
    eax = rd32(COW_IMG(0x1099d200u));
    ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa04u);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x1029bb80u), eax, ecx, in_edx);
    return;
L_1028a83c: ;
    if (arg1 == rd32(eax + 0x9a0u))
    {
        ecx = rd32(eax + 0x9a0u);
        edx = in_edx;
    }
    else
    {
        ecx = rd32(eax + 0x9a0u);
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        cow_stdcall(g, COW_IMG(0x1028ab70u), 0);
        t1 = g->ecx;
        t2 = g->edx;
        eax = rd32(COW_IMG(0x1099d200u));
        ecx = t1;
        edx = t2;
    }
    t3 = rd32(sp0 + 8u);
    wr32(eax + 0x9a0u, arg1);
    if (arg3 != 0u)
    {
        ebp = t3;
        ebx = arg3;
        esi = rd32(COW_IMG(0x1099d200u));
    }
    else
    {
        ebp = t3;
        t4 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x950u);
        g->eax = ebp * 4u;
        g->edx = t4;
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall_cdecl(g, COW_IMG(0x10275eb0u), rd32(COW_IMG(0x1099d200u)), 4, t4, ebp * 4u, COW_IMG(0x103b98a8u), 0x11au);
        t6 = g->edx;
        t7 = rd32(COW_IMG(0x1099d200u));
        wr32(t7 + 0x950u, t5);
        if ((int32_t)ebp <= 0)
        {
            ecx = t7;
            edx = t6;
            goto L_1028a8b3;
        }
        eax = 0u;
L_1028a89f: ;
        t8 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x950u);
        t9 = rd32(COW_IMG(0x1099d200u));
        wr32(eax * 4u + t8, eax);
        if ((int32_t)(eax + 1u) < (int32_t)ebp)
        {
            eax = eax + 1u;
            goto L_1028a89f;
        }
        ecx = t8;
        edx = t9;
L_1028a8b3: ;
        ebx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x950u);
        esi = rd32(COW_IMG(0x1099d200u));
    }
    if (ebp != 0u)
    {
L_1028a8d7: ;
        if (rd32(esi + 0x998u) != 0u)
        {
            eax = rd32(esi + 0x998u);
        }
        else
        {
            eax = rd32(esi + 0x998u);
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t10 = cow_stdcall(g, COW_IMG(0x1028aa90u), 0);
            eax = t10;
            esi = rd32(COW_IMG(0x1099d200u));
        }
        if ((int32_t)(ebp + rd32(esi + 0x998u)) <= 1000)
        {
            edi = rd32(esi + 0x998u);
            ecx = ebp;
        }
        else
        {
            edi = rd32(esi + 0x998u);
            if ((int32_t)(0x3e8u - edi) >= 3)
            {
                ecx = 0x3e8u - edi;
                goto L_1028a920;
            }
            ecx = 0x3e8u - edi;
            if (arg1 == 4u) goto L_1028a939;
            if (arg1 == 5u) goto L_1028a939;
            if (arg1 == 6u) goto L_1028a939;
L_1028a920: ;
            if ((int32_t)ecx >= 2) goto L_1028a92f;
            if (arg1 == 2u) goto L_1028a939;
            if (arg1 == 3u) goto L_1028a939;
L_1028a92f: ;
            if ((int32_t)ecx >= 1) goto L_1028a964;
            if (arg1 != 1u) goto L_1028a964;
L_1028a939: ;
            if (edi != 0u)
            {
                g->eax = eax;
                g->ecx = ecx;
                g->edx = arg1;
                g->esp = sp0 - 0x10u;
                t11 = cow_stdcall(g, COW_IMG(0x1028ab70u), 0);
                t12 = g->ecx;
                t13 = g->edx;
                cow_stdcall(g, COW_IMG(0x1028aa90u), 0);
                esi = rd32(COW_IMG(0x1099d200u));
            }
            if ((int32_t)(0x3e8u - rd32(esi + 0x998u)) < (int32_t)ebp)
            {
                ecx = 0x3e8u - rd32(esi + 0x998u);
                edi = rd32(esi + 0x998u);
            }
            else
            {
                edi = rd32(esi + 0x998u);
                ecx = ebp;
            }
L_1028a964: ;
            if (arg1 != 4u)
            {
                if (arg1 == 2u)
                {
                    if ((int32_t)(ecx & 0x80000001u) >= 0)
                    {
                        eax = ecx & 0x80000001u;
                    }
                    else
                    {
                        eax = ecx & 0x80000001u;
                        eax = (eax - 1u | 0xfffffffeu) + 1u;
                    }
                    ecx = ecx - eax;
                }
            }
            else
            {
                t14 = cow_divs(g, ecx, 3u);
                t15 = cow_mods(g, ecx, 3u);
                ecx = ecx - t15;
                ebp = rd32(sp0 + 8u);
            }
        }
        wr32(sp0 + 8u, ebp - ecx);
        if (edi == 0u)
        {
            ebp = ebp - ecx;
        }
        else
        {
            ebp = ebp - ecx;
            if (arg1 == 5u)
            {
                t16 = rd32(esi + 0x99cu);
                wr16(edi * 2u + t16, rd16(edi * 2u + t16 - 2u));
                t17 = rd16(ebx);
                wr16(rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u) * 2u + rd32(rd32(COW_IMG(0x1099d200u)) + 0x99cu) + 2u, (uint16_t)t17);
                t18 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u) + 2u;
                wr32(rd32(COW_IMG(0x1099d200u)) + 0x998u, t18);
                esi = rd32(COW_IMG(0x1099d200u));
                edi = (edi & 0xffff0000u) | t17;
            }
        }
        if ((int32_t)ecx <= 0)
        {
            eax = 0u;
            goto L_1028aa19;
        }
        eax = 0u;
L_1028a9f2: ;
        t19 = rd16(ebx);
        wr16(eax * 2u + rd32(esi + 0x998u) * 2u + rd32(esi + 0x99cu), (uint16_t)t19);
        if ((int32_t)(eax + 1u) < (int32_t)ecx)
        {
            eax = eax + 1u;
            ebx = ebx + 4u;
            esi = rd32(COW_IMG(0x1099d200u));
            edi = (edi & 0xffff0000u) | t19;
            goto L_1028a9f2;
        }
        eax = eax + 1u;
        ebx = ebx + 4u;
        esi = rd32(COW_IMG(0x1099d200u));
L_1028aa19: ;
        if ((int32_t)(ecx & 0x80000001u) >= 0)
        {
            zf = (ecx & 0x80000001u) == 0u;
        }
        else
        {
            edi = ecx & 0x80000001u;
            zf = (edi - 1u | 0xfffffffeu) + 1u == 0u;
        }
        if (zf) goto L_1028aa53;
        if (arg1 != 5u) goto L_1028aa53;
        wr16(eax * 2u + rd32(esi + 0x998u) * 2u + rd32(esi + 0x99cu), rd16(ebx - 4u));
        wr32(rd32(COW_IMG(0x1099d200u)) + 0x998u, ecx + rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u) + 1u);
        ecx = ecx + 1u;
L_1028aa59: ;
        if (ebp == 0u) goto L_1028aa7f;
        if (arg1 != 5u) goto L_1028aa6a;
        ebx = ebx - 8u;
        ebp = ebp + 2u;
L_1028aa73: ;
        wr32(sp0 + 8u, ebp);
L_1028aa77: ;
        if (ebp != 0u) goto L_1028a8d1;
    }
L_1028aa7f: ;
    return;
L_1028a8d1: ;
    edx = arg1;
    esi = rd32(COW_IMG(0x1099d200u));
    goto L_1028a8d7;
L_1028aa53: ;
    wr32(esi + 0x998u, ecx + rd32(esi + 0x998u));
    goto L_1028aa59;
L_1028aa6a: ;
    if (arg1 != 3u) goto L_1028aa77;
    ebx = ebx - 4u;
    ebp = ebp + 1u;
    goto L_1028aa73;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028a820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028a820(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
