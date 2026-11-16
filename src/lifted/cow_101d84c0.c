/* f_0x101d84c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101d84c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 0x898u) != 1u)
    {
        edx = in_edx;
    }
    else
    {
        g->esp = sp0 - 4u;
        cow_fastcall(g, COW_IMG(0x101d7e50u), self, in_edx, 0);
        t1 = g->edx;
        edx = t1;
    }
    if (rd32(rd32(COW_IMG(0x10578204u)) + 8u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
        ecx = rd32(COW_IMG(0x10578204u));
        g->esp = sp0 - 4u;
        t2 = cow_call_regs(g, COW_IMG(0x1013e3b0u), eax, ecx, edx, 0, 4, 0u, 1u, 0u, 0u);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    if ((uint8_t)arg1 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        goto L_101d856e;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    if (rd8(self + 0x898u) != 1u) goto L_101d8522;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x101d7df0u), self, 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        ecx = rd32(COW_IMG(0x10578204u));
        edx = t5;
        goto L_101d8569;
    }
    eax = t4;
    ecx = rd32(COW_IMG(0x10578204u));
    edx = t5;
    t6 = (eax & 0xffff0000u) | rd16(eax + 0x14u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x1013e260u), t6, ecx, g->edx, 0, 4, t6, 0u, 0u, 0u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_101d8522: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x1020a420u), self, 0);
    t10 = g->edx;
    if (rd32(self + 0x38u) == 0u)
    {
        eax = t9;
        edx = t10;
        goto L_101d855f;
    }
    eax = t9;
    edx = t10;
    if ((int16_t)rd16(self + 0x20u) <= 0) goto L_101d855f;
    if (eax == 0u) goto L_101d855f;
    if (rd32(eax) == 3u)
    {
        ecx = rd32(eax);
        goto L_101d8545;
    }
    ecx = rd32(eax);
    if (ecx != 4u) goto L_101d855f;
L_101d8545: ;
    t11 = (ecx & 0xffff0000u) | rd16(eax + 4u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_call_regs(g, COW_IMG(0x1013e260u), eax, rd32(COW_IMG(0x10578204u)), g->edx, 0, 4, t11, 0u, 0u, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101d855f: ;
    ecx = rd32(COW_IMG(0x10578204u));
L_101d8569: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, 0u, 0u);
    t15 = g->edx;
    eax = t14;
    edx = t15;
L_101d856e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d84c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d84c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
