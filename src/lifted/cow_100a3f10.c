/* f_0x100a3f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a3f10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t18;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(COW_IMG(0x10487f10u), arg1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x100a4060u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr16(COW_IMG(0x10485bb6u) + arg1 * 0x140u, 0x2a30u);
    t3 = COW_IMG(0x10485ab4u) + arg1 * 0x140u;
    wr32(COW_IMG(0x10485a90u) + arg1 * 0x140u, t3);
    g->eax = t3;
    g->edx = t2;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x100a3fe0u), t1, 1, t3);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd8(rd32(COW_IMG(0x10485a90u) + arg1 * 0x140u)) != 0x20u)
    {
        eax = rd32(COW_IMG(0x10485a90u) + arg1 * 0x140u);
        ecx = t5;
        edx = t6;
        edi = t4;
    }
    else
    {
        eax = rd32(COW_IMG(0x10485a90u) + arg1 * 0x140u);
        ecx = t5;
        edx = t6;
        edi = t4;
        wr32(COW_IMG(0x10485a90u) + arg1 * 0x140u, eax + 1u);
        eax = eax + 1u;
    }
    if (rd8(rd32(COW_IMG(0x10485a90u) + arg1 * 0x140u)) != 0u)
    {
        esi = rd32(COW_IMG(0x10485a90u) + arg1 * 0x140u);
        goto L_100a3f71;
    }
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t7 = cow_stdcall(g, COW_IMG(0x100a3ed0u), 0);
    return t7 & 0xffffff00u;
L_100a3f71: ;
    g->eax = eax;
    g->edx = edx;
    t8 = rd32(COW_IMG(0x10487f14u));
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x1014df50u), t8, 1, esi);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    ebx = 0u;
L_100a3f80: ;
    if (rd8(edi) == 0u) goto L_100a3fc4;
    wr32(COW_IMG(0x10485a94u) + arg1 * 0x140u + ebx * 4u, edi);
    g->ebx = ebx;
    g->eax = arg1 * 0x50u + ebx;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall_cdecl(g, COW_IMG(0x100a3fe0u), ecx, 1, edi);
    if (rd8(rd32(COW_IMG(0x10485a94u) + arg1 * 0x140u + ebx * 4u)) != 0x20u)
    {
        eax = rd32(COW_IMG(0x10485a94u) + arg1 * 0x140u + ebx * 4u);
        esi = COW_IMG(0x10485a94u) + arg1 * 0x140u + ebx * 4u;
        edi = t12;
    }
    else
    {
        eax = rd32(COW_IMG(0x10485a94u) + arg1 * 0x140u + ebx * 4u);
        esi = COW_IMG(0x10485a94u) + arg1 * 0x140u + ebx * 4u;
        edi = t12;
        wr32(esi, eax + 1u);
        eax = eax + 1u;
    }
    g->ebp = arg1;
    g->eax = eax;
    g->edx = rd32(esi);
    t13 = rd32(COW_IMG(0x10487f14u));
    t14 = rd32(esi);
    g->esp = sp0 - 0x10u;
    t15 = cow_thiscall(g, COW_IMG(0x1014df90u), t13, 2, t14, ebx + 1u);
    t16 = g->ecx;
    t17 = g->edx;
    if ((int32_t)(ebx + 1u) < 8)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        ebx = ebx + 1u;
        goto L_100a3f80;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    ebx = ebx + 1u;
L_100a3fc4: ;
    if (ebx != 0u) goto L_100a3fd4;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t18 = cow_stdcall(g, COW_IMG(0x100a3ed0u), 0);
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return t18 & 0xffffff00u;
L_100a3fd4: ;
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a3f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a3f10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
