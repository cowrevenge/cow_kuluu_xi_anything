/* f_0x101b3a20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101b3a20(Guest* g)
{
    uint32_t eax;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x101b6e90u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101b3aca;
    }
    edx = t2;
    t3 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x10u, t3);
    g->ecx = t3;
    g->edx = edx;
    t4 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0xcu;
    t5 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t3);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x10u, t5);
    g->ecx = t6;
    g->edx = t7;
    t8 = cow_stdcall(g, COW_IMG(0x102bc87cu), 1, t5);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        ecx = t9;
        esi = t5;
        goto L_101b3aba;
    }
    ecx = t9;
    edx = t10;
    esi = t5;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_stdcall(g, COW_IMG(0x102bc86au), 4, esi, 0u, 0u, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        edx = t13;
        edi = t11;
        goto L_101b3a74;
    }
    ecx = t12;
    wr32(sp0 - 0x10u, esi);
    t14 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x14u, t14);
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t15 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t14, esi);
    t16 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t16;
    return 0u;
L_101b3a74: ;
    wr32(sp0 - 0x10u, COW_IMG(0x1037c47cu));
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101907a0u), g->eax, sp0 - 4u, edx, 1, 4, sp0 - 4u, edi, COW_IMG(0x1037c47cu), rd32(sp0 - 0xcu));
    t17 = g->ecx;
    wr32(sp0 - 0x10u, edi);
    t18 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t18);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, esi);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x102bc86au), 4, esi, 0u, t18, edi);
    t19 = g->ecx;
    t20 = g->edx;
    t21 = rd32(sp0 - 4u);
    wr32(sp0 - 0x10u, t21);
    g->edx = t20;
    t22 = rd32(t21 + 0xcu);
    cow_cdecl(g, COW_IMG(0x101907d0u), 1, t21);
    t23 = g->edx;
    wr32(sp0 - 0x10u, esi);
    t24 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x14u, t24);
    g->edx = t23;
    cow_stdcall(g, COW_IMG(0x101aff60u), 2, t24, esi);
    t25 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t25;
    return t22;
L_101b3aba: ;
    wr32(sp0 - 0x10u, esi);
    t26 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x14u, t26);
    g->edx = rd32(COW_IMG(0x103d3c64u));
    t27 = rd32(COW_IMG(0x103d3c64u));
    g->esp = sp0 - 0xcu;
    t28 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t26, esi);
    t29 = g->edx;
    eax = t28;
    edx = t29;
L_101b3aca: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t30 = cow_call_regs(g, COW_IMG(0x101b5740u), eax, self, g->edx, 1, 0);
    t31 = g->edx;
    g->edx = t31;
    return t30;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b3a20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b3a20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
