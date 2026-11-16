/* f_0x10316840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10316840(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    int64_t q11;
    int64_t q12;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    if ((int32_t)rd32(sp0 + 8u) >= 0)
    {
        edi = 0u;
    }
    else
    {
        eax = rd32(sp0 + 8u);
        t1 = -eax - (rd32(sp0 + 4u) != 0u);
        t2 = rd32(sp0 + 4u);
        wr32(sp0 + 8u, t1);
        wr32(sp0 + 4u, -t2);
        edi = 1u;
    }
    if ((int32_t)rd32(sp0 + 0x10u) >= 0)
    {
        eax = rd32(sp0 + 0x10u);
    }
    else
    {
        eax = rd32(sp0 + 0x10u);
        t3 = -eax - (rd32(sp0 + 0xcu) != 0u);
        t4 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0x10u, t3);
        wr32(sp0 + 0xcu, -t4);
        eax = t3;
        edi = edi + 1u;
    }
    if (eax != 0u)
    {
        ecx = rd32(sp0 + 0xcu);
        edx = rd32(sp0 + 8u);
        ebx = eax;
        eax = rd32(sp0 + 4u);
L_103168a7: ;
        cf = ebx & 1u;
        of = ebx >> 0x1fu;
        { /* rcr ecx, 1 */ { unsigned c = ((unsigned)(0x1u) & 31u) % 33u; uint32_t r = ecx; unsigned i; for (i = 0; i < c; i++) { unsigned o = r & 1u; r = (uint32_t)((r >> 1) | ((uint32_t)cf << 31)); cf = o; } if (c) { of = ((r >> 31) ^ (r >> 30)) & 1u; } ecx = (uint32_t)(r); } }
        cf = edx & 1u;
        of = edx >> 0x1fu;
        { /* rcr eax, 1 */ { unsigned c = ((unsigned)(0x1u) & 31u) % 33u; uint32_t r = eax; unsigned i; for (i = 0; i < c; i++) { unsigned o = r & 1u; r = (uint32_t)((r >> 1) | ((uint32_t)cf << 31)); cf = o; } if (c) { of = ((r >> 31) ^ (r >> 30)) & 1u; } eax = (uint32_t)(r); } }
        if (ebx >> 1u != 0u)
        {
            edx = edx >> 1u;
            ebx = ebx >> 1u;
            goto L_103168a7;
        }
        edx = edx >> 1u;
        t9 = cow_divu64(g, edx, eax, ecx);
        t10 = cow_modu64(g, edx, eax, ecx);
        q11 = (uint64_t)cow_mulu(t9, rd32(sp0 + 0x10u));
        q12 = (uint64_t)cow_mulu(rd32(sp0 + 0xcu), t9);
        if ((uint32_t)(q11) + cow_qhi(q12) < cow_qhi(q12))
        {
            esi = t9;
            goto L_103168d5;
        }
        eax = (uint32_t)(q12);
        edx = (uint32_t)(q11) + cow_qhi(q12);
        esi = t9;
        if (edx > rd32(sp0 + 8u)) goto L_103168d5;
        cf = edx < rd32(sp0 + 8u);
        if (cf) goto L_103168d6;
        if (eax <= rd32(sp0 + 4u)) goto L_103168d6;
L_103168d5: ;
        esi = esi - 1u;
L_103168d6: ;
        eax = esi;
        edx = 0u;
    }
    else
    {
        t5 = cow_divu(g, rd32(sp0 + 8u), rd32(sp0 + 0xcu));
        t6 = cow_modu(g, rd32(sp0 + 8u), rd32(sp0 + 0xcu));
        t7 = cow_divu64(g, t6, rd32(sp0 + 4u), rd32(sp0 + 0xcu));
        t8 = cow_modu64(g, t6, rd32(sp0 + 4u), rd32(sp0 + 0xcu));
        eax = t7;
        edx = t5;
    }
    if (edi == 1u)
    {
        edx = -edx - (eax != 0u);
        eax = -eax;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10316840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10316840(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
