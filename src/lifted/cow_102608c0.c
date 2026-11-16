/* f_0x102608c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102608c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u) goto L_102608d2;
    return 0x80004003u;
L_102608d2: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, arg1 - 0x64u);   /* kernel32.dll!EnterCriticalSection */
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(arg1 - 0x7cu) == 0u)
    {
        ecx = t1;
        edx = t2;
        eax = rd32(arg1 + 0x78u);
    }
    else
    {
        eax = rd32(arg1 - 0x7cu);
        ecx = t1;
        edx = t2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_stdcall(g, rd32(COW_IMG(0x10329400u)), 0);   /* winmm.dll!timeGetTime */
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3 - rd32(arg1 + 0x78u);
        ecx = t4;
        edx = t5;
    }
    if ((int32_t)eax > 0) goto L_10260910;
    wr32(arg2, 0u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, arg1 - 0x64u);   /* kernel32.dll!LeaveCriticalSection */
    t6 = g->edx;
    g->edx = t6;
    return 0u;
L_10260910: ;
    t7 = rd32(arg1 + 0x44u);
    g->eax = t7;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_stdcall(g, rd32(COW_IMG(0x1032921cu)), 3, 0x186a0u, t7, eax);   /* kernel32.dll!MulDiv */
    t9 = g->ecx;
    t10 = g->edx;
    wr32(arg2, t8);
    g->edx = t10;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, arg1 - 0x64u);   /* kernel32.dll!LeaveCriticalSection */
    t11 = g->edx;
    g->edx = t11;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102608c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102608c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
