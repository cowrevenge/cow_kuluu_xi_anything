/* f_0x102092b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102092b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;

    if ((uint16_t)rd32(sp0 + 4u) >= 0x100u)
    {
        eax = in_eax;
        goto L_102092fb;
    }
    ecx = rd32(sp0 + 4u);
    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10485824u));
        goto L_102092fb;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10485824u));
    if (rd8(COW_IMG(0x10485640u)) != 0x12u)
    {
        eax = (eax & 0xffffff00u) | 0x12u;
        goto L_102092da;
    }
    wr8(sp0 + 4u, 0u);
L_102092e6: ;
    t1 = rd32(sp0 + 4u);
    g->eax = t1;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100fcc50u), 3, t1, 0x1202u, ecx);
    return t2;
L_102092da: ;
    if (rd8(COW_IMG(0x10485642u)) != (uint8_t)eax) goto L_102092fb;
    wr8(sp0 + 4u, 1u);
    goto L_102092e6;
L_102092fb: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102092b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102092b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
