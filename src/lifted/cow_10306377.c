/* f_0x10306377 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10306377(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t of;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = rd32(arg1 + 4u);
    g->edx = in_edx;
    t1 = rd32(arg1 + 4u);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall_cdecl(g, rd32(t1), self, 3, arg1, 1u, 0x18u);
    t3 = g->edx;
    wr32(arg1 + 0x1a0u, t2);
    wr32(t2, COW_IMG(0x10305db2u));
    if (rd32(arg1 + 0x24u) == 1u)
    {
        edx = t3;
        edi = t2;
        goto L_103063c3;
    }
    eax = rd32(arg1 + 0x24u);
    edx = t3;
    edi = t2;
    zf = rd32(arg1 + 0x24u) == 1u;
    sf = (int32_t)(rd32(arg1 + 0x24u) - 1u) < 0;
    of = ((rd32(arg1 + 0x24u) ^ 1u) & (rd32(arg1 + 0x24u) ^ rd32(arg1 + 0x24u) - 1u)) >> 0x1fu;
    if (zf || sf != of) goto L_103063bc;
    if ((int32_t)eax <= 3) goto L_103063b7;
    if ((int32_t)eax > 5) goto L_103063bc;
    zf = rd32(arg1 + 0x20u) == 4u;
L_103063c6: ;
    if (zf) goto L_103063d7;
L_103063c8: ;
    wr32(rd32(arg1) + 0x14u, 8u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, rd32(rd32(arg1)), 1u, 1, arg1);
    t4 = g->edx;
    edx = t4;
L_103063d7: ;
    t5 = rd32(arg1 + 0x28u);
    if (t5 == 1u) goto L_10306449;
    eax = t5;
    ecx = t5 - 1u;
    if (ecx == 1u)
    {
        ecx = ecx - 1u;
        goto L_10306421;
    }
    ecx = ecx - 1u;
    if (ecx == 2u)
    {
        ecx = ecx - 2u;
        goto L_10306404;
    }
    ecx = ecx - 2u;
    if (eax != rd32(arg1 + 0x24u)) goto L_103063f3;
    t6 = rd32(arg1 + 0x20u);
    wr32(arg1 + 0x64u, t6);
L_10306440: ;
    wr32(edi + 4u, COW_IMG(0x10305bf2u));
L_1030647f: ;
    if (rd8(arg1 + 0x4au) == 0u)
    {
        t13 = rd32(arg1 + 0x64u);
        wr32(arg1 + 0x68u, t13);
    }
    else
    {
        wr32(arg1 + 0x68u, 1u);
    }
    g->edx = edx;
    return;
L_103063b7: ;
    zf = rd32(arg1 + 0x20u) == 3u;
    goto L_103063c6;
L_103063bc: ;
    if ((int32_t)rd32(arg1 + 0x20u) >= 1) goto L_103063d7;
    goto L_103063c8;
L_103063c3: ;
    zf = rd32(arg1 + 0x20u) == 1u;
    goto L_103063c6;
L_103063f3: ;
    wr32(rd32(arg1) + 0x14u, 0x19u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, rd32(rd32(arg1)), ecx, 1, arg1);
    t11 = g->edx;
    edx = t11;
    goto L_1030647f;
L_10306404: ;
    t7 = rd32(arg1 + 0x24u);
    wr32(arg1 + 0x64u, 4u);
    if (t7 != 5u)
    {
        eax = t7;
        goto L_1030641c;
    }
    wr32(edi + 4u, COW_IMG(0x10305c80u));
L_10306432: ;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10305b42u), arg1, ecx, edx, 1, 0);
    t9 = g->edx;
    edx = t9;
    goto L_1030647f;
L_1030641c: ;
    zf = eax == 4u;
L_1030643e: ;
    if (!zf) goto L_103063f3;
    goto L_10306440;
L_10306421: ;
    t8 = rd32(arg1 + 0x24u);
    wr32(arg1 + 0x64u, 3u);
    if (t8 != 3u)
    {
        eax = t8;
        goto L_1030643b;
    }
    wr32(edi + 4u, COW_IMG(0x10306159u));
    goto L_10306432;
L_1030643b: ;
    zf = eax == 2u;
    goto L_1030643e;
L_10306449: ;
    t10 = rd32(arg1 + 0x24u);
    wr32(arg1 + 0x64u, 1u);
    if (t10 == 1u) goto L_1030645a;
    eax = t10;
    if (eax != 3u)
    {
        ecx = 1u;
        goto L_103063f3;
    }
L_1030645a: ;
    wr32(edi + 4u, COW_IMG(0x10305c5du));
    if ((int32_t)rd32(arg1 + 0x20u) > 1)
    {
        eax = 1u;
        ecx = 0x54u;
L_1030646b: ;
        t12 = rd32(arg1 + 0xc4u);
        wr8(ecx + t12 + 0x30u, 0u);
        if ((int32_t)(eax + 1u) < (int32_t)rd32(arg1 + 0x20u))
        {
            eax = eax + 1u;
            ecx = ecx + 0x54u;
            goto L_1030646b;
        }
        edx = t12;
    }
    goto L_1030647f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10306377(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10306377(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
