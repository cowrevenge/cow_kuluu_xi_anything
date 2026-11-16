/* f_0x10303d33 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10303d33(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edx = in_edx;
    ebx = rd32(arg1 + 4u);
    edi = rd32(arg1);
L_10303df7: ;
    if ((int32_t)rd32(sp0 + 0xcu) < 25) goto L_10303d46;
L_10303e01: ;
    t11 = rd32(sp0 + 8u);
    wr32(arg1 + 0xcu, t11);
    t12 = rd32(sp0 + 0xcu);
    wr32(arg1 + 0x18u, t12);
    wr32(arg1, edi);
    wr32(arg1 + 4u, ebx);
    eax = (t12 & 0xffffff00u) | 1u;
L_10303e14: ;
    return eax;
L_10303d46: ;
    if (rd32(arg1 + 8u) != 0u) goto L_10303db7;
    if (ebx != 0u) goto L_10303d6e;
    t1 = rd32(arg1 + 0x1cu);
    g->eax = t1;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, rd32(rd32(rd32(arg1 + 0x1cu) + 0x14u) + 0xcu), rd32(rd32(arg1 + 0x1cu) + 0x14u), 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        goto L_10303e19;
    }
    edx = t3;
    ebx = rd32(rd32(rd32(arg1 + 0x1cu) + 0x14u) + 4u);
    edi = rd32(rd32(rd32(arg1 + 0x1cu) + 0x14u));
L_10303d6e: ;
    if (rd8(edi) != 0xffu)
    {
        ecx = rd8(edi);
        ebx = ebx - 1u;
        edi = edi + 1u;
        goto L_10303de8;
    }
    ebx = ebx - 1u;
    edi = edi + 1u;
L_10303d7c: ;
    if (ebx != 0u) goto L_10303da3;
    t4 = rd32(arg1 + 0x1cu);
    g->eax = t4;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall(g, rd32(rd32(rd32(arg1 + 0x1cu) + 0x14u) + 0xcu), rd32(rd32(arg1 + 0x1cu) + 0x14u), 0);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        goto L_10303e19;
    }
    edx = t6;
    ebx = rd32(rd32(rd32(arg1 + 0x1cu) + 0x14u) + 4u);
    edi = rd32(rd32(rd32(arg1 + 0x1cu) + 0x14u));
L_10303da3: ;
    if (rd8(edi) == 0xffu)
    {
        ebx = ebx - 1u;
        edi = edi + 1u;
        goto L_10303d7c;
    }
    ecx = rd8(edi);
    ebx = ebx - 1u;
    edi = edi + 1u;
    if (ecx != 0u) goto L_10303db4;
    ecx = 0xffu;
L_10303de8: ;
    t9 = rd32(sp0 + 8u);
    wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) + 8u);
    t10 = t9 << 8u | ecx;
    wr32(sp0 + 8u, t10);
    goto L_10303df7;
L_10303db4: ;
    wr32(arg1 + 8u, ecx);
L_10303db7: ;
    if ((int32_t)rd32(sp0 + 0xcu) >= (int32_t)arg4) goto L_10303e01;
    if (rd8(rd32(arg1 + 0x20u)) == 0u)
    {
        wr32(rd32(rd32(arg1 + 0x1cu)) + 0x14u, 0x71u);
        t7 = rd32(arg1 + 0x1cu);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(rd32(arg1 + 0x1cu)) + 4u), rd32(rd32(arg1 + 0x1cu)), 0);
        t8 = g->edx;
        wr8(rd32(arg1 + 0x20u), 1u);
        edx = t8;
    }
    ecx = 0u;
    goto L_10303de8;
L_10303e19: ;
    eax = eax & 0xffffff00u;
    goto L_10303e14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10303d33(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10303d33(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
