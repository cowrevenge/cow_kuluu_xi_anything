/* f_0x100db170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100db170(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x98u) == 0u)
    {
        eax = arg1;
        goto L_100db545;
    }
    if (arg1 > 0xcbu)
    {
        edx = in_edx;
        goto L_100db562;
    }
    t1 = rd32(COW_IMG(0x100db584u) + rd8(COW_IMG(0x100db5d4u) + arg1) * 4u);
    switch (t1 - RD)
    {
    case 0x100db1a2u: goto L_100db1a2;
    case 0x100db1bfu: goto L_100db1bf;
    case 0x100db1e0u: goto L_100db1e0;
    case 0x100db201u: goto L_100db201;
    case 0x100db254u: goto L_100db254;
    case 0x100db293u: goto L_100db293;
    case 0x100db2d7u: goto L_100db2d7;
    case 0x100db31bu: goto L_100db31b;
    case 0x100db35fu: goto L_100db35f;
    case 0x100db39eu: goto L_100db39e;
    case 0x100db3ddu: goto L_100db3dd;
    case 0x100db408u: goto L_100db408;
    case 0x100db433u: ecx = rd8(COW_IMG(0x100db5d4u) + arg1); goto L_100db433;
    case 0x100db499u: goto L_100db499;
    case 0x100db4c7u: goto L_100db4c7;
    case 0x100db4f5u: goto L_100db4f5;
    case 0x100db512u: goto L_100db512;
    case 0x100db53cu: goto L_100db53c;
    case 0x100db545u: eax = arg1; goto L_100db545;
    case 0x100db562u: edx = in_edx; goto L_100db562;
    default: rt_fatal(g, COW_IMG(0x100db19bu), "switch");
    }
    return 0;
L_100db1a2: ;
    wr32(self + 0x88u, 0u);
    wr32(self + 0xcu, 0u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db1bf: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x88u, 1u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db1e0: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x88u, 0x13u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db201: ;
    if (rd32(self + 0x88u) == 1u) goto L_100db233;
    eax = rd32(self + 0x88u);
    if (eax == 0x13u) goto L_100db233;
    if (eax == 3u) goto L_100db233;
    if (eax == 4u) goto L_100db233;
    if (eax == 0x14u) goto L_100db233;
    if (eax == 0x16u) goto L_100db233;
    if (eax == 0x17u) goto L_100db233;
    if (eax != 5u)
    {
        edx = in_edx;
        goto L_100db562;
    }
L_100db233: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x88u, 2u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db254: ;
    if (rd32(self + 0x88u) == 2u) goto L_100db268;
    eax = rd32(self + 0x88u);
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_100db562;
    }
L_100db268: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x80u, arg2);
    wr32(self + 0x88u, 3u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db293: ;
    if (rd32(self + 0x88u) == 2u) goto L_100db2ac;
    eax = rd32(self + 0x88u);
    if (eax == 1u) goto L_100db2ac;
    if (eax != 0x14u)
    {
        edx = in_edx;
        goto L_100db562;
    }
L_100db2ac: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x80u, arg2);
    wr32(self + 0x88u, 0x14u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db2d7: ;
    if (rd32(self + 0x88u) == 2u) goto L_100db2f0;
    eax = rd32(self + 0x88u);
    if (eax == 1u) goto L_100db2f0;
    if (eax != 0x16u)
    {
        edx = in_edx;
        goto L_100db562;
    }
L_100db2f0: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x80u, arg2);
    wr32(self + 0x88u, 0x16u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db31b: ;
    if (rd32(self + 0x88u) == 2u) goto L_100db334;
    eax = rd32(self + 0x88u);
    if (eax == 1u) goto L_100db334;
    if (eax != 0x17u)
    {
        edx = in_edx;
        goto L_100db562;
    }
L_100db334: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x80u, arg2);
    wr32(self + 0x88u, 0x17u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db35f: ;
    if (rd32(self + 0x88u) == 1u) goto L_100db373;
    eax = rd32(self + 0x88u);
    if (eax != 0x14u)
    {
        edx = in_edx;
        goto L_100db562;
    }
L_100db373: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x80u, arg2);
    wr32(self + 0x88u, 4u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db39e: ;
    if (rd32(self + 0x88u) == 2u) goto L_100db3b2;
    eax = rd32(self + 0x88u);
    if (eax != 1u)
    {
        edx = in_edx;
        goto L_100db562;
    }
L_100db3b2: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x80u, arg2);
    wr32(self + 0x88u, 5u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db3dd: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x84u, arg2);
    wr32(self + 0x88u, 0x12u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db408: ;
    wr32(self + 0xcu, 0u);
    wr32(self + 0x84u, arg2);
    wr32(self + 0x88u, 0x11u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db433: ;
    if (rd32(self + 0x10u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_stdcall(g, COW_IMG(0x100f78c0u), 0);
        t2 = g->edx;
        edx = t2;
    }
    if (rd32(self + 0x88u) == 0xau) goto L_100db465;
    eax = rd32(self + 0x88u);
    if (eax == 3u) goto L_100db465;
    if (eax == 0xbu) goto L_100db465;
    if (eax == 0xeu) goto L_100db465;
    if (eax == 0xcu) goto L_100db465;
    if (eax != 0x15u) goto L_100db562;
L_100db465: ;
    t3 = rd32(self + 0x98u);
    wr32(self + 0x88u, 6u);
    wr32(self + 0x90u, 0x64u);
    if (t3 == 3u) goto L_100db555;
    wr32(self + 0xcu, 0xfu);
    return 1u;
L_100db499: ;
    if (rd32(self + 0x88u) != 6u)
    {
        edx = in_edx;
        goto L_100db562;
    }
    wr32(self + 0xcu, 0u);
    wr32(self + 0x88u, 7u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db4c7: ;
    if (rd32(self + 0x88u) != 6u)
    {
        edx = in_edx;
        goto L_100db562;
    }
    wr32(self + 0xcu, 0u);
    wr32(self + 0x88u, 8u);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db4f5: ;
    if (rd32(self + 0x88u) == 7u) goto L_100db505;
    eax = rd32(self + 0x88u);
    if (eax != 8u)
    {
        edx = in_edx;
        goto L_100db562;
    }
L_100db505: ;
    wr32(self + 0x8cu, 9u);
    eax = 9u;
L_100db545: ;
    wr32(self + 0x88u, eax);
    wr32(self + 0x90u, 0x64u);
L_100db555: ;
    wr32(self + 0xcu, 0u);
    return 1u;
L_100db512: ;
    if (rd32(self + 0x88u) != 9u)
    {
        edx = in_edx;
        goto L_100db562;
    }
    wr32(self + 0xcu, 0u);
    wr32(self + 0x88u, 0xau);
    wr32(self + 0x90u, 0x64u);
    return 1u;
L_100db53c: ;
    if (rd32(self + 0x88u) != 9u)
    {
        edx = in_edx;
        goto L_100db562;
    }
    eax = arg1;
    goto L_100db545;
L_100db562: ;
    wr32(self + 0x94u, 0xc9u);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x100db170u), self, edx, 2, 0xc9u, 0u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100db170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100db170(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
