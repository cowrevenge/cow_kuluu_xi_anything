/* f_0x1022b6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1022b6e0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_1022b7b3;
    }
    if (rd8(arg1) == 0u)
    {
        eax = in_eax;
        goto L_1022b7b3;
    }
    if (rd32(COW_IMG(0x10667a74u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10667a74u));
        goto L_1022b7b3;
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x100f00a0u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_1022b7b3;
    }
    ecx = t2;
    edx = t3;
    ebx = t1;
    eax = rd32(COW_IMG(0x10667a74u));
    ebp = 0u;
    edi = 0u;
L_1022b71f: ;
    if (rd16(eax + ebp) == 0u) goto L_1022b7a3;
    if ((uint8_t)arg2 == 0u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg2;
        goto L_1022b736;
    }
    ecx = (ecx & 0xffffff00u) | (uint8_t)arg2;
    if (rd16(eax + ebp + 2u) == 6u) goto L_1022b7a3;
L_1022b736: ;
    g->esp = sp0 - 0x18u;
    t4 = cow_call_regs(g, COW_IMG(0x1022bda0u), eax, ecx, edx, 1, 0);
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x1022bf00u), t4, 1, edi);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    esi = arg1;
L_1022b743: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1022b767;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_1022b763;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1022b767;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1022b743;
    }
L_1022b763: ;
    eax = 0u;
L_1022b76c: ;
    if (eax != 0u) goto L_1022b79a;
    if ((int32_t)(edi & 0x80000007u) >= 0)
    {
        ecx = edi & 0x80000007u;
        pf = PARITY(edi & 7u);
        zf = (edi & 0x80000007u) == 0u;
        sf = (int32_t)(edi & 0x80000007u) < 0;
        of = 0u;
    }
    else
    {
        ecx = edi & 0x80000007u;
        pf = PARITY((uint8_t)((ecx - 1u | 0xfffffff8u) + 1u));
        zf = (ecx - 1u | 0xfffffff8u) + 1u == 0u;
        sf = (int32_t)((ecx - 1u | 0xfffffff8u) + 1u) < 0;
        of = (ecx - 1u | 0xfffffff8u) + 1u == 0x80000000u;
        ecx = (ecx - 1u | 0xfffffff8u) + 1u;
    }
    t9 = 1u << (ecx & 0x1fu);
    if ((rd8(ebx + (uint32_t)((int32_t)(edi + ((uint32_t)((int32_t)edi >> 0x1fu) & 7u)) >> 3u)) & (uint8_t)t9) != 0u)
    {
        eax = ((uint32_t)((int32_t)(edi + ((uint32_t)((int32_t)edi >> 0x1fu) & 7u)) >> 3u) & 0xffffff00u) | rd8(ebx + (uint32_t)((int32_t)(edi + ((uint32_t)((int32_t)edi >> 0x1fu) & 7u)) >> 3u));
        goto L_1022b7bb;
    }
    ecx = t9;
    edx = (uint32_t)((int32_t)edi >> 0x1fu) & 7u;
L_1022b79a: ;
    eax = rd32(COW_IMG(0x10667a74u));
L_1022b7a3: ;
    if ((int32_t)(ebp + 0x64u) < 102400)
    {
        ebp = ebp + 0x64u;
        edi = edi + 1u;
        goto L_1022b71f;
    }
L_1022b7b3: ;
    return eax & 0xffffff00u;
L_1022b767: ;
    eax = -cf + 1u - cf;
    goto L_1022b76c;
L_1022b7bb: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022b6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022b6e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
