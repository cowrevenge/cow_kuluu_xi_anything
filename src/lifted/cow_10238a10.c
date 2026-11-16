/* f_0x10238a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10238a10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x14u) == 1u)
    {
        eax = in_eax;
        goto L_10238a8d;
    }
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_10238a64;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        goto L_10238a8d;
    }
    if (rd32(rd32(COW_IMG(0x10668fc4u)) + 8u) == 0u)
    {
        eax = rd32(COW_IMG(0x10668fc4u));
        ecx = rd32(rd32(COW_IMG(0x10668fc4u)) + 8u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x10668fc4u));
        ecx = rd32(rd32(COW_IMG(0x10668fc4u)) + 8u);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x1011a400u), ecx, 0);
        t2 = g->edx;
        g->ecx = rd32(rd32(COW_IMG(0x10668fc4u)) + 8u);
        g->edx = t2;
        t3 = rd32(rd32(COW_IMG(0x10668fc4u)) + 8u);
        t4 = cow_stdcall(g, COW_IMG(0x101192b0u), 2, 2u, 0u);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    wr32(self + 0x3cu, 0xffffffffu);
    wr32(self + 0x14u, 1u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    return (t7 & 0xffffff00u) | 1u;
L_10238a64: ;
    g->eax = (uint32_t)(int16_t)arg1 - 5u;
    g->edx = in_edx;
    t8 = rd32(COW_IMG(0x1066901cu));
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x1023da70u), t8, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_10238a82;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    if ((int32_t)rd32(eax) >= 0) goto L_10238a82;
    wr32(self + 0x18u, 1u);
    return (eax & 0xffffff00u) | 1u;
L_10238a82: ;
    wr32(self + 0x3cu, 1u);
    wr32(self + 0x14u, 1u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    eax = t12;
L_10238a8d: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10238a10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10238a10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
