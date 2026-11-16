/* f_0x100014a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100014a0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    if (rd32(COW_IMG(0x10456a7cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456a7cu));
        wr32(sp0 - 8u, in_ebx);
        wr32(sp0 - 0xcu, in_ebp);
        wr32(sp0 - 0x10u, in_esi);
        wr32(sp0 - 0x14u, in_edi);
        wr32(sp0 - 0x18u, 0u);
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_cdecl(g, rd32(COW_IMG(0x103293c4u)), 1, 0u);   /* user32.dll!GetForegroundWindow */
        t2 = g->ecx;
        t3 = g->edx;
        wr32(sp0 - 0x1cu, t1);
        g->ecx = t2;
        g->edx = t3;
        t4 = rd32(COW_IMG(0x103293c0u));
        t5 = cow_stdcall(g, t4, 2, t1, 0u);   /* user32.dll!GetWindowThreadProcessId */
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, arg1);
        g->edx = t7;
        t8 = cow_thiscall(g, t4, t6, 2, arg1, 0u);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, t5);
        wr32(sp0 - 0x20u, t8);
        g->ecx = t9;
        g->edx = t10;
        cow_stdcall(g, rd32(COW_IMG(0x103293bcu)), 3, t8, t5, 1u);   /* user32.dll!AttachThreadInput */
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, sp0 - 4u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0x2000u);
        g->eax = sp0 - 4u;
        g->ecx = t11;
        g->edx = t12;
        t13 = rd32(COW_IMG(0x103293b8u));
        t14 = cow_stdcall(g, t13, 4, 0x2000u, 0u, sp0 - 4u, 0u);   /* user32.dll!SystemParametersInfoA */
        t15 = g->ecx;
        t16 = g->edx;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0x2001u);
        g->edx = t16;
        t17 = cow_thiscall(g, t13, t15, 4, 0x2001u, 0u, 0u, 0u);
        t18 = g->ecx;
        t19 = g->edx;
        wr32(sp0 - 0x18u, arg1);
        g->edx = t19;
        t20 = cow_stdcall(g, rd32(COW_IMG(0x103293b4u)), 1, arg1);   /* user32.dll!SetForegroundWindow */
        t21 = g->edx;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, sp0 - 4u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0x2001u);
        g->edx = t21;
        t22 = cow_thiscall(g, t13, sp0 - 4u, 4, 0x2001u, 0u, sp0 - 4u, 0u);
        t23 = g->ecx;
        t24 = g->edx;
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, t5);
        wr32(sp0 - 0x20u, t8);
        cow_stdcall(g, rd32(COW_IMG(0x103293bcu)), 3, t8, t5, 0u);   /* user32.dll!AttachThreadInput */
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100014a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100014a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
