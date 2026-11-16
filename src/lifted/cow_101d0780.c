/* f_0x101d0780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101d0780(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 1064u);

    wr32(sp0 - 0x404u, in_esi);
    if (rd32(self + 8u) != 0u) goto L_101d079f;
    return 1u;
L_101d079f: ;
    wr32(sp0 - 0x408u, in_ebx);
    wr32(sp0 - 0x40cu, in_edi);
    wr32(sp0 - 0x410u, sp0 - 0x400u);
    wr32(sp0 - 0x414u, arg4);
    wr32(sp0 - 0x418u, arg3);
    wr32(sp0 - 0x41cu, arg5);
    wr32(sp0 - 0x420u, arg2);
    wr32(sp0 - 0x424u, arg1);
    g->edx = arg1;
    g->esp = sp0 - 0x40cu;
    cow_stdcall(g, COW_IMG(0x101cfdb0u), 6, arg1, arg2, arg5, arg3, arg4, sp0 - 0x400u);
    t1 = g->edx;
    wr32(sp0 - 0x410u, sp0 - 0x400u);
    g->eax = sp0 - 0x400u;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x101cfa00u), self, 1, sp0 - 0x400u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    ebx = 4u;
    edi = self + 0x1cu;
L_101d07e9: ;
    wr32(sp0 - 0x410u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    t4 = cow_stdcall(g, COW_IMG(0x101cff60u), 1, edi);
    t5 = g->edx;
    wr32(sp0 - 0x410u, 0u);
    wr32(sp0 - 0x414u, edi);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x101d01b0u), self, 2, edi, 0u);
    t7 = g->edx;
    wr32(sp0 - 0x410u, 0u);
    wr32(sp0 - 0x414u, edi);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x101d0210u), self, 2, edi, 0u);
    t9 = g->edx;
    if (ebx != 1u)
    {
        eax = t8;
        edx = t9;
        ebx = ebx - 1u;
        edi = edi + 0x100u;
        goto L_101d07e9;
    }
    eax = t8;
    edx = t9;
    wr32(sp0 - 0x410u, self + 0x41cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x40cu;
    t10 = cow_stdcall(g, COW_IMG(0x101cff60u), 1, self + 0x41cu);
    t11 = g->edx;
    wr32(sp0 - 0x410u, 1u);
    wr32(sp0 - 0x414u, self + 0x41cu);
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x101d01b0u), self, 2, self + 0x41cu, 1u);
    t13 = g->edx;
    wr32(sp0 - 0x410u, 1u);
    wr32(sp0 - 0x414u, self + 0x41cu);
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x101d0210u), self, 2, self + 0x41cu, 1u);
    t15 = g->edx;
    wr32(sp0 - 0x410u, self + 0x51cu);
    g->edx = t15;
    t16 = cow_stdcall(g, COW_IMG(0x101cff60u), 1, self + 0x51cu);
    t17 = g->edx;
    wr32(sp0 - 0x410u, 2u);
    wr32(sp0 - 0x414u, self + 0x51cu);
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x101d01b0u), self, 2, self + 0x51cu, 2u);
    t19 = g->edx;
    wr32(sp0 - 0x410u, 2u);
    wr32(sp0 - 0x414u, self + 0x51cu);
    g->edx = t19;
    cow_thiscall(g, COW_IMG(0x101d0210u), self, 2, self + 0x51cu, 2u);
    t20 = g->edx;
    g->ebx = rd32(sp0 - 0x408u);
    g->esi = rd32(sp0 - 0x404u);
    g->edi = rd32(sp0 - 0x40cu);
    g->edx = t20;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d0780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d0780(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
