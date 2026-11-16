/* f_0x101b78a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=1 */
uint32_t cow_fn_101b78a0(Guest* g)
{
    uint32_t eax;
    uint32_t zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)(uint16_t)arg1 > 31875) goto L_101b79dd;
    if ((uint16_t)arg1 == 0x7c83u) goto L_101b7b1d;
    if ((int32_t)(uint16_t)arg1 > 24707) goto L_101b794b;
    if ((uint16_t)arg1 == 0x6083u) goto L_101b78f8;
    if ((int32_t)(uint16_t)arg1 > 21635) goto L_101b791b;
    if ((uint16_t)arg1 == 0x5483u) goto L_101b78f8;
    if ((int32_t)(uint16_t)arg1 > 20099) goto L_101b7908;
    if ((uint16_t)arg1 == 0x4e83u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0x4583u) goto L_101b7901;
    if ((uint16_t)arg1 == 0x4a83u) goto L_101b78f8;
    if ((uint16_t)arg1 != 0x4c83u)
    {
        eax = arg1;
        goto L_101b78fe;
    }
L_101b78f8: ;
    eax = (uint16_t)arg1 + 0x100u;
L_101b78fe: ;
    return eax;
L_101b7901: ;
    return (arg1 & 0xffff0000u) | 0x9483u;
L_101b7908: ;
    if ((uint16_t)arg1 == 0x5083u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0x5283u) goto L_101b78f8;
    return arg1;
L_101b791b: ;
    if ((int32_t)(uint16_t)arg1 > 23171) goto L_101b7938;
    if ((uint16_t)arg1 == 0x5a83u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0x5683u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0x5883u) goto L_101b78f8;
    return arg1;
L_101b7938: ;
    if ((uint16_t)arg1 == 0x5c83u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0x5e83u) goto L_101b78f8;
    return arg1;
L_101b794b: ;
    if ((int32_t)(uint16_t)arg1 > 29571) goto L_101b799d;
    if ((uint16_t)arg1 == 0x7383u) goto L_101b7b1d;
    if ((int32_t)(uint16_t)arg1 > 28291) goto L_101b7982;
    if ((uint16_t)arg1 == 0x6e83u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0x6383u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0x6583u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0x6783u) goto L_101b78f8;
    return arg1;
L_101b7982: ;
    if ((uint16_t)arg1 == 0x7083u) goto L_101b7b1d;
    if ((uint16_t)arg1 == 0x7183u) goto L_101b78f8;
    return arg1;
L_101b799d: ;
    if ((int32_t)(uint16_t)arg1 > 30595) goto L_101b79c2;
    if ((uint16_t)arg1 == 0x7783u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0x7483u) goto L_101b78f8;
    zf = (uint16_t)arg1 == 0x7583u;
L_101b7b17: ;
    if (!zf)
    {
        eax = arg1;
        goto L_101b78fe;
    }
L_101b7b1d: ;
    return (uint16_t)arg1 - 0x100u;
L_101b79c2: ;
    if ((uint16_t)arg1 == 0x7983u) goto L_101b7b1d;
    if ((uint16_t)arg1 == 0x7a83u) goto L_101b78f8;
    return arg1;
L_101b79dd: ;
    if ((int32_t)(uint16_t)arg1 > 49794) goto L_101b7a91;
    if ((uint16_t)arg1 == 0xc282u) goto L_101b78f8;
    if ((int32_t)(uint16_t)arg1 > 46466) goto L_101b7a4d;
    if ((uint16_t)arg1 == 0xb582u) goto L_101b78f8;
    if ((int32_t)(uint16_t)arg1 > 44930) goto L_101b7a32;
    if ((uint16_t)arg1 == 0xaf82u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0xa982u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0xab82u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0xad82u) goto L_101b78f8;
    return arg1;
L_101b7a32: ;
    if ((uint16_t)arg1 == 0xb182u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0xb382u) goto L_101b78f8;
    return arg1;
L_101b7a4d: ;
    if ((int32_t)(uint16_t)arg1 > 48002) goto L_101b7a76;
    if ((uint16_t)arg1 == 0xbb82u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0xb782u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0xb982u) goto L_101b78f8;
    return arg1;
L_101b7a76: ;
    if ((uint16_t)arg1 == 0xbd82u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0xbf82u) goto L_101b78f8;
    return arg1;
L_101b7a91: ;
    if ((int32_t)(uint16_t)arg1 > 54146) goto L_101b7ae4;
    if ((uint16_t)arg1 == 0xd382u) goto L_101b78f8;
    if ((int32_t)(uint16_t)arg1 > 53122) goto L_101b7ad0;
    if ((uint16_t)arg1 == 0xcf82u) goto L_101b7b1d;
    if ((uint16_t)arg1 == 0xc482u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0xc682u) goto L_101b78f8;
    if ((uint16_t)arg1 == 0xcd82u) goto L_101b78f8;
    return arg1;
L_101b7ad0: ;
    if ((uint16_t)arg1 == 0xd082u) goto L_101b78f8;
    zf = (uint16_t)arg1 == 0xd282u;
    goto L_101b7b17;
L_101b7ae4: ;
    if ((int32_t)(uint16_t)arg1 > 55426) goto L_101b7b05;
    if ((uint16_t)arg1 == 0xd882u) goto L_101b7b1d;
    if ((uint16_t)arg1 == 0xd582u) goto L_101b7b1d;
    if ((uint16_t)arg1 == 0xd682u) goto L_101b78f8;
    return arg1;
L_101b7b05: ;
    if ((uint16_t)arg1 == 0xd982u) goto L_101b78f8;
    zf = (uint16_t)arg1 == 0xdb82u;
    goto L_101b7b17;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b78a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b78a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
