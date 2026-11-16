/* f_0x10202d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_10202d80(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(COW_IMG(0x106643e8u), arg2);
    wr32(COW_IMG(0x106643ecu), arg3);
    wr8(COW_IMG(0x103852b0u), (uint8_t)arg7);
    wr8(COW_IMG(0x106643f0u), (uint8_t)arg4);
    wr8(COW_IMG(0x106643f1u), (uint8_t)arg5);
    wr32(COW_IMG(0x106643e4u), arg1);
    wr32(COW_IMG(0x106643fcu), 0u);
    wr8(COW_IMG(0x106643f2u), (uint8_t)arg6);
    wr32(COW_IMG(0x106643e0u), 0u);
    if ((uint32_t)(int8_t)arg7 == 2u) goto L_10202df7;
    if ((uint32_t)(int8_t)arg7 == 3u) goto L_10202de7;
    wr8(COW_IMG(0x106643f4u), 0u);
    eax = (uint32_t)(int8_t)arg7 - 3u;
L_10202dfe: ;
    wr8(COW_IMG(0x106643f3u), 6u);
L_10202e05: ;
    if (arg1 == 0u)
    {
        if (rd32(rd32(COW_IMG(0x106643a8u)) + 8u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x106643a8u)) + 8u);
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x106643a8u)) + 8u);
            wr32(eax + 0x34u, rd32(eax + 0x34u) | 1u);
        }
        g->eax = eax;
        g->esp = sp0 - 4u;
        t14 = cow_thiscall(g, COW_IMG(0x1015e830u), COW_IMG(0x10621838u), 1, 0u);
        t15 = rd32(COW_IMG(0x1057876cu));
        wr8(t15 + 0x59u, 0u);
        wr32(COW_IMG(0x103852acu), 0x80808080u);
        eax = t14;
        edx = t15;
    }
    else
    {
        if (rd32(COW_IMG(0x1057876cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1057876cu));
            g->esp = sp0 - 8u;
            t1 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, (arg3 & 0xffffff00u) | (uint8_t)arg6, 1, 0);
            t2 = g->edx;
            if (t1 != 0u)
            {
                edx = t2;
                esi = t1;
                t3 = rd32(esi + 4u);
                g->ebx = 0u;
                g->ecx = rd32(COW_IMG(0x106643a8u));
                g->edx = edx;
                t4 = rd32(COW_IMG(0x106643a8u));
                g->esp = sp0 - 8u;
                t5 = cow_stdcall(g, COW_IMG(0x10203540u), 1, t3);
                t6 = g->ecx;
                t7 = g->edx;
                wr32(COW_IMG(0x106643e0u), t5);
                if ((int32_t)t5 < 0)
                {
                    eax = t5;
                    ecx = t6;
                    edx = t7;
                    goto L_10202e46;
                }
                eax = t5;
                edx = t7;
                if ((int32_t)eax < (int8_t)rd8(COW_IMG(0x106643f3u))) goto L_10202e71;
                ecx = (uint32_t)(int8_t)rd8(COW_IMG(0x106643f3u));
L_10202e46: ;
                g->eax = eax;
                g->esp = sp0 - 8u;
                t8 = cow_stdcall(g, COW_IMG(0x101cc550u), 0);
                if ((int8_t)rd8(COW_IMG(0x106643f4u)) >= 0) goto L_10202e6b;
                eax = t8;
                if (eax == 0u) goto L_10202e6b;
                t9 = rd32(eax + 0x78u);
                t10 = rd32(esi + 4u);
                wr32(COW_IMG(0x106643e0u), 0xffffffffu);
                if (t9 == t10) goto L_10202e71;
L_10202e6b: ;
                wr32(COW_IMG(0x106643e0u), 0u);
            }
        }
L_10202e71: ;
        if (rd32(rd32(COW_IMG(0x106643a8u)) + 8u) == 0u)
        {
            eax = rd32(rd32(COW_IMG(0x106643a8u)) + 8u);
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x106643a8u)) + 8u);
            wr32(eax + 0x34u, rd32(eax + 0x34u) & 0xfffffffeu);
        }
        t11 = rd32(rd32(COW_IMG(0x106643a8u)) + 8u);
        g->esp = sp0 - 4u;
        cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t11, 2, t11, 0u);
        t12 = g->edx;
        t13 = rd32(COW_IMG(0x1057876cu));
        wr8(t13 + 0x59u, 1u);
        wr32(COW_IMG(0x103852acu), 0xa04040d0u);
        eax = t13;
        edx = t12;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x10157780u), rd32(COW_IMG(0x1057876cu)), 2, 0u, 0u);
    t17 = g->edx;
    cow_thiscall(g, COW_IMG(0x10157860u), rd32(COW_IMG(0x1057876cu)), 2, 0u, 0u);
    wr8(rd32(COW_IMG(0x1057876cu)) + 0x58u, 0u);
    g->ebx = in_ebx;
    return;
L_10202de7: ;
    wr8(COW_IMG(0x106643f4u), 0xffu);
    wr8(COW_IMG(0x106643f3u), 0x12u);
    eax = (uint32_t)(int8_t)arg7 - 3u;
    goto L_10202e05;
L_10202df7: ;
    wr8(COW_IMG(0x106643f4u), 0xffu);
    eax = (uint32_t)(int8_t)arg7 - 2u;
    goto L_10202dfe;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10202d80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10202d80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
