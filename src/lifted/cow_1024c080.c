/* f_0x1024c080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_1024c080(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(COW_IMG(0x106690c4u)) < rd32(COW_IMG(0x106690f0u)))
    {
        eax = rd32(COW_IMG(0x106690c4u));
        ecx = rd32(COW_IMG(0x106690f0u));
    }
    else
    {
        eax = rd32(COW_IMG(0x106690c4u));
        ecx = rd32(COW_IMG(0x106690f0u));
        ecx = ecx + 0x2000u;
    }
    if (arg1 == 7u) goto L_1024c100;
    if (ecx <= eax + 0x20u)
    {
        edx = arg1;
        goto L_1024c174;
    }
    wr32(eax, arg1);
    wr32(eax + 4u, arg2);
    wr32(eax + 8u, arg3);
    wr32(eax + 0xcu, arg4);
    wr32(eax + 0x10u, arg5);
    wr32(eax + 0x14u, arg6);
    wr32(eax + 0x18u, arg7);
    wr32(eax + 0x1cu, arg8);
    if (eax + 0x20u < rd32(COW_IMG(0x106690e8u)) + 0x2000u)
    {
        eax = eax + 0x20u;
        ecx = rd32(COW_IMG(0x106690e8u));
        edx = rd32(COW_IMG(0x106690e8u)) + 0x2000u;
        goto L_1024c166;
    }
    ecx = rd32(COW_IMG(0x106690e8u));
    edx = rd32(COW_IMG(0x106690e8u)) + 0x2000u;
    wr32(COW_IMG(0x106690c4u), ecx);
    g->edx = edx;
    return 0u;
L_1024c100: ;
    if (ecx <= eax + 0x120u)
    {
        edx = eax + 0x120u;
        goto L_1024c174;
    }
    wr32(eax, 7u);
    wr32(eax + 4u, arg3);
    wr32(eax + 8u, arg4);
    eax = eax + 0x20u;
    edx = arg2;
    ebx = 8u;
L_1024c12c: ;
    if (eax >= rd32(COW_IMG(0x106690e8u)) + 0x2000u)
    {
        ecx = rd32(COW_IMG(0x106690e8u));
        eax = ecx;
    }
    esi = edx;
    edi = eax;
    ecx = 8u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (ebx != 1u)
    {
        eax = eax + 0x20u;
        edx = edx + 0x20u;
        ebx = ebx - 1u;
        goto L_1024c12c;
    }
    eax = eax + 0x20u;
    if (eax < rd32(COW_IMG(0x106690e8u)) + 0x2000u)
    {
        ecx = rd32(COW_IMG(0x106690e8u));
        edx = rd32(COW_IMG(0x106690e8u)) + 0x2000u;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106690e8u));
        edx = rd32(COW_IMG(0x106690e8u)) + 0x2000u;
        eax = ecx;
    }
L_1024c166: ;
    wr32(COW_IMG(0x106690c4u), eax);
    g->edx = edx;
    return (uint32_t)((int32_t)(eax - ecx) >> 5u);
L_1024c174: ;
    g->edx = edx;
    return (uint32_t)((int32_t)(eax - rd32(COW_IMG(0x106690e8u))) >> 5u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024c080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024c080(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
