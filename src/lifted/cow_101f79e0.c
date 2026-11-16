/* f_0x101f79e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101f79e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 0xcu);
    wr8(sp0 + 0xcu, (int32_t)t1 < 0);
    if ((int32_t)t1 >= 0)
    {
        eax = (in_eax & 0xffffff00u) | (int32_t)t1 < 0;
        ecx = self;
        edx = in_edx;
        esi = t1;
        goto L_101f7a63;
    }
    eax = (in_eax & 0xffffff00u) | (int32_t)t1 < 0;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t2 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        goto L_101f7aa6;
    }
    edx = t3;
    esi = t2;
    g->eax = rd32(esi);
    t4 = rd32(esi);
    g->esp = sp0 - 0x1cu;
    t5 = cow_thiscall(g, rd32(t4 + 0x1bcu), esi, 0);
    t6 = rd32(t5);
    t7 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    t8 = rd32(t7 + 4u);
    g->eax = t8;
    t9 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    t10 = rd32(t9 + 8u);
    cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    g->eax = t10;
    g->edx = t6;
    t11 = rd32(COW_IMG(0x10631f24u));
    t12 = cow_thiscall(g, COW_IMG(0x101811d0u), t11, 3, t6, t8, t10);
    t13 = g->ecx;
    t14 = g->edx;
    eax = t12;
    ecx = t13;
    edx = t14;
    esi = t12;
L_101f7a63: ;
    if (rd32(COW_IMG(0x10663888u)) == 0u) goto L_101f7aa6;
    ebx = rd32(COW_IMG(0x10663888u));
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t15 = cow_call_regs(g, COW_IMG(0x101f7430u), g->eax, ecx, edx, 1, 3, arg2, esi, 1u);
    if ((int32_t)t15 < 0)
    {
        eax = t15;
        goto L_101f7aa6;
    }
    t16 = rd32(sp0 + 0xcu);
    g->edi = arg2;
    g->eax = t16;
    g->esp = sp0 - 0x1cu;
    t17 = cow_thiscall(g, COW_IMG(0x101f9a50u), ebx, 7, arg2, esi, arg1, arg4, 0u, t16, 1u);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return (t17 & 0xffffff00u) | 1u;
L_101f7aa6: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f79e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f79e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
